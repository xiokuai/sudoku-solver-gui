import random
from dlx_solver import solve_sudoku


def generate_full_board():
    """生成一个完整的已填充合法数独解"""
    board = [[0 for _ in range(9)] for _ in range(9)]

    def is_valid(b, r, c, num):
        for i in range(9):
            if b[r][i] == num or b[i][c] == num:
                return False
        start_r, start_c = 3 * (r // 3), 3 * (c // 3)
        for i in range(start_r, start_r + 3):
            for j in range(start_c, start_c + 3):
                if b[i][j] == num:
                    return False
        return True

    def fill():
        for i in range(9):
            for j in range(9):
                if board[i][j] == 0:
                    nums = list(range(1, 10))
                    random.shuffle(nums)
                    for num in nums:
                        if is_valid(board, i, j, num):
                            board[i][j] = num
                            if fill():
                                return True
                            board[i][j] = 0
                    return False
        return True

    fill()
    return board


def generate_puzzle(min_holes=40, max_tries=100):
    """从完整棋盘中挖空，确保唯一解"""
    board = generate_full_board()
    cells = [(i, j) for i in range(9) for j in range(9)]
    random.shuffle(cells)
    holes = 0
    tries = 0

    while holes < min_holes and tries < max_tries:
        i, j = cells.pop()
        backup = board[i][j]
        board[i][j] = 0

        # 验证唯一解
        solution = solve_sudoku(board)
        if solution:
            holes += 1
        else:
            board[i][j] = backup  # 恢复
        tries += 1

    return board
