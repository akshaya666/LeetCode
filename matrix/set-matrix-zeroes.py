class Solution:
    def setZeroes(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        first_row_zero, first_col_zero = 0,0

        n,m = len(matrix),len(matrix[0])

        for i in range(m):

            if matrix[0][i] == 0:
                first_row_zero = 1
                break;
        for j in range(n):

            if matrix[j][0] == 0:
                first_col_zero = 1
                break
        
        for i in range(1,n):
            for j in range(1,m):
                if matrix[i][j] == 0:
                    matrix[i][0] = 0
                    matrix[0][j] = 0
        for i in range(1,n):
            for j in range(1,m):

                if matrix[i][0] == 0 or matrix[0][j] == 0:
                    matrix[i][j] = 0
        if first_row_zero == 1:
            for i in range(m):
                matrix[0][i] = 0
        
        if first_col_zero == 1:
            for j in range(n):
                matrix[j][0] =0
                
