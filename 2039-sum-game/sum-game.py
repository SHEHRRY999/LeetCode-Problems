class Solution:
    def sumGame(self, num: str) -> bool:
        n = len(num)
        res = 0
        for i in range(n):
            sign = 1 if i < n // 2 else -1
            value = 4.5 if num[i] == '?' else int(num[i])
            res += sign * value
        return res != 0.0