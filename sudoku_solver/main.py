# sudoku_solver/main.py

import sys
from PyQt5.QtWidgets import QApplication
from ui_main import SudokuWindow

if __name__ == '__main__':
    app = QApplication(sys.argv)
    window = SudokuWindow()
    window.show()
    sys.exit(app.exec_())
 
