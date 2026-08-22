class Solution:
    def checkDivisibility(self, n: int) -> bool:
        num = n
        total = 0
        prod = 1
        while n > 0:
            digit = n % 10
            n //= 10
            total += digit
            prod *= digit
        SUM = total + prod
        return num % SUM == 0