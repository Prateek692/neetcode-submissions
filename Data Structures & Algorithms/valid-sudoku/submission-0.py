class Solution:
    def isValidSubBox(self,x,y) -> bool:
        row1 = x*3
        col1 = y*3
        elements = []
        for i in range(row1,row1+3):
            for j in range(col1,col1+3):
                if self.board[i][j] != ".":
                    elements.append(int(self.board[i][j]))
        
        return len(elements) == len(set(elements))
    
    def isValidRow(self,x) -> bool:
        elements = []
        for j in range(0,9):
            if self.board[x][j] != ".":
                elements.append(int(self.board[x][j]))
        return len(elements) == len(set(elements))

    def isValidCol(self,y) -> bool:
        elements = []
        for i in range(0,9):
            if self.board[i][y] != ".":
                elements.append(int(self.board[i][y]))
        return len(elements) == len(set(elements))

    def check(self) -> bool:
        for i in range(0,9):
            if not self.isValidRow(i):
                return False
            if not self.isValidCol(i):
                return False
        for i in range(0,3):
            for j in range(0,3):
                if not self.isValidSubBox(i,j):
                    return False

        return True

    def isValidSudoku(self, board: List[List[str]]) -> bool:
        self.board = board
        return self.check()
        