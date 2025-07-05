# sudoku_solver/board_logic.py

def is_valid_move(board, row, col, num):
    for j in range(9):
        if board[row][j] == num and j != col:
            return False
    for i in range(9):
        if board[i][col] == num and i != row:
            return False
    start_row, start_col = 3 * (row // 3), 3 * (col // 3)
    for i in range(start_row, start_row + 3):
        for j in range(start_col, start_col + 3):
            if board[i][j] == num and (i != row or j != col):
                return False
    return True

def get_conflict_cells(board):
    """返回所有冲突的格子坐标 (i, j) 列表"""
    conflicts = []
    for i in range(9):
        for j in range(9):
            val = board[i][j]
            if val != 0 and not is_valid_move(board, i, j, val):
                conflicts.append((i, j))
    return conflicts
