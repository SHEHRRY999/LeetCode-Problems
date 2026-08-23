class Solution:
    def isValid(self, grid, row, col, n, expValue):
        if row < 0 or col < 0 or row >= n or col >= n or grid[row][col] != expValue:
            return False
        if expValue == n * n - 1:
            return True

        ans1 = self.isValid(grid, row - 2, col + 1, n, expValue + 1)
        ans2 = self.isValid(grid, row - 1, col + 2, n, expValue + 1)
        ans3 = self.isValid(grid, row + 1, col + 2, n, expValue + 1)
        ans4 = self.isValid(grid, row + 2, col + 1, n, expValue + 1)
        ans5 = self.isValid(grid, row + 2, col - 1, n, expValue + 1)
        ans6 = self.isValid(grid, row + 1, col - 2, n, expValue + 1)
        ans7 = self.isValid(grid, row - 1, col - 2, n, expValue + 1)
        ans8 = self.isValid(grid, row - 2, col - 1, n, expValue + 1)

        return ans1 or ans2 or ans3 or ans4 or ans5 or ans6 or ans7 or ans8

    def checkValidGrid(self, grid):
        return self.isValid(grid, 0, 0, len(grid), 0)