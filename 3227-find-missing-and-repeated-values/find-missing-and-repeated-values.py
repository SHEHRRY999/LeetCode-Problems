class Solution:
    def findMissingAndRepeatedValues(self, grid: List[List[int]]) -> List[int]:
        for_a = set()
        a = 0
        n = len(grid)
        actual_sum = 0
        expected_sum = n * n * (n * n + 1) // 2

        for i in range(len(grid)):
            for j in range(len(grid[0])):
                actual_sum += grid[i][j]
                if grid[i][j] in for_a:
                    a = grid[i][j]
                for_a.add(grid[i][j])

        b = expected_sum - actual_sum + a
        return [a, b]