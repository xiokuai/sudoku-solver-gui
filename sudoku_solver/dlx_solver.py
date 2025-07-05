# sudoku_solver/dlx_solver.py

class Node:
    def __init__(self):
        self.L = self.R = self.U = self.D = self.C = self
        self.row = -1

class ColumnNode(Node):
    def __init__(self, name):
        super().__init__()
        self.name = name
        self.size = 0

class DLXSolver:
    def __init__(self, matrix):
        self.solution = []
        self.head = self._build_linked_matrix(matrix)

    def _build_linked_matrix(self, matrix):
        cols = len(matrix[0])
        head = ColumnNode("head")
        column_nodes = []

        last = head
        for i in range(cols):
            col = ColumnNode(str(i))
            column_nodes.append(col)
            last.R = col
            col.L = last
            last = col
        last.R = head
        head.L = last

        for i, row in enumerate(matrix):
            first = None
            for j, val in enumerate(row):
                if val:
                    col = column_nodes[j]
                    node = Node()
                    node.row = i
                    node.C = col

                    if first is None:
                        first = node
                    else:
                        node.L = first.L
                        node.R = first
                        first.L.R = node
                        first.L = node

                    node.U = col.U
                    node.D = col
                    col.U.D = node
                    col.U = node
                    col.size += 1
        return head

    def _cover(self, col):
        col.R.L = col.L
        col.L.R = col.R
        i = col.D
        while i != col:
            j = i.R
            while j != i:
                j.D.U = j.U
                j.U.D = j.D
                j.C.size -= 1
                j = j.R
            i = i.D

    def _uncover(self, col):
        i = col.U
        while i != col:
            j = i.L
            while j != i:
                j.C.size += 1
                j.D.U = j
                j.U.D = j
                j = j.L
            i = i.U
        col.R.L = col
        col.L.R = col

    def _search(self):
        if self.head.R == self.head:
            return True

        col = self._select_column()
        self._cover(col)

        r = col.D
        while r != col:
            self.solution.append(r.row)

            j = r.R
            while j != r:
                self._cover(j.C)
                j = j.R

            if self._search():
                return True

            j = r.L
            while j != r:
                self._uncover(j.C)
                j = j.L

            self.solution.pop()
            r = r.D

        self._uncover(col)
        return False

    def _select_column(self):
        min_size = float("inf")
        chosen = None
        col = self.head.R
        while col != self.head:
            if col.size < min_size:
                min_size = col.size
                chosen = col
            col = col.R
        return chosen

    def solve(self):
        if self._search():
            return self.solution
        return None

def sudoku_to_exact_cover(board):
    """
    Converts the 9x9 Sudoku board into a 729x324 exact cover matrix
    """
    R, C, N = 9, 9, 9
    def cell_index(r, c, n): return r * 81 + c * 9 + n
    def row_index(r, c, n): return r * 81 + c * 9 + n

    matrix = [[0 for _ in range(324)] for _ in range(729)]

    for r in range(9):
        for c in range(9):
            if board[r][c] != 0:
                n = board[r][c] - 1
                row = cell_index(r, c, n)
                matrix[row][r * 9 + c] = 1                    # cell constraint
                matrix[row][81 + r * 9 + n] = 1               # row constraint
                matrix[row][162 + c * 9 + n] = 1              # column constraint
                matrix[row][243 + ((r//3)*3 + c//3)*9 + n] = 1# box constraint
            else:
                for n in range(9):
                    row = cell_index(r, c, n)
                    matrix[row][r * 9 + c] = 1
                    matrix[row][81 + r * 9 + n] = 1
                    matrix[row][162 + c * 9 + n] = 1
                    matrix[row][243 + ((r//3)*3 + c//3)*9 + n] = 1
    return matrix

def solve_sudoku(board):
    matrix = sudoku_to_exact_cover(board)
    solver = DLXSolver(matrix)
    solution = solver.solve()

    if not solution:
        return None

    result = [[0 for _ in range(9)] for _ in range(9)]
    for row in solution:
        r = row // 81
        c = (row % 81) // 9
        n = row % 9
        result[r][c] = n + 1
    return result
