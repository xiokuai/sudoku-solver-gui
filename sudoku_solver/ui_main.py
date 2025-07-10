import json
from PyQt5.QtWidgets import (
    QMainWindow, QWidget, QGridLayout, QLineEdit, QPushButton,
    QVBoxLayout, QMessageBox, QFileDialog, QGridLayout
)
from PyQt5.QtGui import QFont
from PyQt5.QtCore import Qt


class SudokuWindow(QMainWindow):
    def __init__(self):
        super().__init__()
        self.setWindowTitle(self.tr("数独助手 by-wuli"))
        self.setFixedSize(500, 780)

        self.central_widget = QWidget()
        self.setCentralWidget(self.central_widget)

        self.grid = [[None for _ in range(9)] for _ in range(9)]
        self.current_cell = None
        self.init_ui()

    def init_ui(self):
        layout = QVBoxLayout()
        grid_layout = QGridLayout()

        font = QFont("微软雅黑", 16)

        for i in range(9):
            for j in range(9):
                cell = QLineEdit()
                cell.setFixedSize(50, 50)
                cell.setFont(font)
                cell.setAlignment(Qt.AlignCenter)
                cell.setMaxLength(1)
                cell.setStyleSheet(self._cell_border_style(i, j))
                cell.textChanged.connect(self.update_conflicts)
                cell.installEventFilter(self)
                self.grid[i][j] = cell
                grid_layout.addWidget(cell, i, j)

        # 按钮区
        self.solve_button = QPushButton(self.tr("求解"))
        self.clear_button = QPushButton(self.tr("清空"))
        self.import_button = QPushButton(self.tr("导入"))
        self.export_button = QPushButton(self.tr("导出"))
        self.generate_button = QPushButton(self.tr("生成题目"))

        for btn in [self.solve_button, self.clear_button, self.import_button,
                    self.export_button, self.generate_button]:
            btn.setFixedHeight(40)

        self.solve_button.clicked.connect(self.solve)
        self.clear_button.clicked.connect(self.clear)
        self.import_button.clicked.connect(self.import_board)
        self.export_button.clicked.connect(self.export_board)
        self.generate_button.clicked.connect(self.generate_board)

        # 按钮布局美化
        btn_layout = QGridLayout()
        btns = [self.solve_button, self.clear_button, self.import_button,
                self.export_button, self.generate_button]
        for index, btn in enumerate(btns):
            btn_layout.addWidget(btn, index // 2, index % 2)

        layout.addLayout(grid_layout)
        layout.addLayout(btn_layout)

        self.central_widget.setLayout(layout)

        # 应用全局样式
        self.apply_styles()

    def apply_styles(self):
        self.setStyleSheet("""
            QMainWindow {
                background-color: #f2f4f7;
            }

            QLineEdit {
                background-color: #ffffff;
                border: 1px solid #ccc;
                border-radius: 6px;
                font-weight: bold;
            }

            QLineEdit:focus {
                border: 2px solid #4a90e2;
                background-color: #e6f2ff;
            }

            QPushButton {
                background-color: #4a90e2;
                color: white;
                font-weight: bold;
                border: none;
                border-radius: 8px;
                padding: 8px;
            }

            QPushButton:hover {
                background-color: #357ABD;
            }

            QPushButton:pressed {
                background-color: #2c5aa0;
            }
        """)

    def _cell_border_style(self, i, j):
        top = "2px" if i % 3 == 0 else "1px"
        left = "2px" if j % 3 == 0 else "1px"
        right = "2px" if j == 8 else "0"
        bottom = "2px" if i == 8 else "0"
        return f"""
            border-top: {top} solid #888;
            border-left: {left} solid #888;
            border-right: {right} solid #888;
            border-bottom: {bottom} solid #888;
            border-radius: 4px;
        """

    def get_board(self):
        board = []
        for i in range(9):
            row = []
            for j in range(9):
                text = self.grid[i][j].text()
                row.append(int(text) if text.isdigit() else 0)
            board.append(row)
        return board

    def set_board(self, board):
        for i in range(9):
            for j in range(9):
                val = board[i][j]
                self.grid[i][j].setText(str(val) if val != 0 else "")
        self.update_conflicts()

    def solve(self):
        from dlx_solver import solve_sudoku
        from board_logic import get_conflict_cells

        board = self.get_board()
        conflicts = get_conflict_cells(board)
        if conflicts:
            QMessageBox.warning(self, self.tr("错误"), self.tr("存在冲突，请检查红色格子！"))
            return

        solution = solve_sudoku(board)
        if solution:
            self.set_board(solution)
        else:
            QMessageBox.information(self, self.tr("无解"), self.tr("该数独无解，请检查输入。"))

    def clear(self):
        for i in range(9):
            for j in range(9):
                self.grid[i][j].clear()
        self.update_conflicts()

    def export_board(self):
        board = self.get_board()
        options = QFileDialog.Options()
        file_path, _ = QFileDialog.getSaveFileName(
            self, self.tr("导出棋盘"), "", self.tr("JSON 文件 (*.json);;所有文件 (*)"), options=options
        )
        if file_path:
            try:
                with open(file_path, "w", encoding="utf-8") as f:
                    json.dump(board, f)
            except Exception as e:
                QMessageBox.critical(self, self.tr("保存失败"), str(e))

    def import_board(self):
        options = QFileDialog.Options()
        file_path, _ = QFileDialog.getOpenFileName(
            self, self.tr("导入棋盘"), "", self.tr("JSON 文件 (*.json);;所有文件 (*)"), options=options
        )
        if file_path:
            try:
                with open(file_path, "r", encoding="utf-8") as f:
                    board = json.load(f)
                if self._validate_imported_board(board):
                    self.set_board(board)
                else:
                    QMessageBox.warning(self, self.tr("导入失败", "文件格式不合法，必须是9x9的数字矩阵。"))
            except Exception as e:
                QMessageBox.critical(self, self.tr("导入失败", str(e)))

    def generate_board(self):
        from sudoku_generator import generate_puzzle
        puzzle = generate_puzzle()
        self.set_board(puzzle)

    def _validate_imported_board(self, board):
        if isinstance(board, list) and len(board) == 9:
            for row in board:
                if not isinstance(row, list) or len(row) != 9:
                    return False
                for val in row:
                    if not isinstance(val, int) or not (0 <= val <= 9):
                        return False
            return True
        return False

    def update_conflicts(self):
        from board_logic import get_conflict_cells

        board = self.get_board()
        conflicts = get_conflict_cells(board)

        for i in range(9):
            for j in range(9):
                base_style = self._cell_border_style(i, j)
                cell = self.grid[i][j]
                if cell == self.current_cell:
                    cell.setStyleSheet(base_style + "background-color: #E0F0FF;")
                elif (i, j) in conflicts:
                    cell.setStyleSheet(base_style + "background-color: #FFCCCC;")
                else:
                    cell.setStyleSheet(base_style)

    def eventFilter(self, obj, event):
        if event.type() == event.FocusIn:
            self.current_cell = obj
            self.update_conflicts()
        return super().eventFilter(obj, event)
