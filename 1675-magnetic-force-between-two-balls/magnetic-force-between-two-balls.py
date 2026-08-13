class Solution:
    def isPossible(self, arr, n, m, minAllowed):
        currentPosition = arr[0]
        balls = 1

        for i in range(1, n):
            if arr[i] - currentPosition >= minAllowed:
                balls += 1
                currentPosition = arr[i]

            if balls == m:
                return True

        return False

    def maxDistance(self, position: List[int], m: int) -> int:
        position.sort()
        n = len(position)

        ans = -1
        start = 1
        end = position[-1] - position[0]

        while start <= end:
            mid = start + (end - start) // 2

            if self.isPossible(position, n, m, mid):
                ans = mid
                start = mid + 1
            else:
                end = mid - 1

        return ans