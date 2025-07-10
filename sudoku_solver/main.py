# sudoku_solver/main.py

import sys
from PyQt5.QtWidgets import QApplication
from PyQt5.QtCore import QTranslator
from ui_main import SudokuWindow

if __name__ == '__main__':
    app = QApplication(sys.argv)
    translator = QTranslator()
    translator.load("mutli-language/sudoku_en_US.qm")  # 或其他语言
    app.installTranslator(translator)
    window = SudokuWindow()
    window.show()
    sys.exit(app.exec_())
 