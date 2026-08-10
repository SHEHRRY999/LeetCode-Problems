class Solution:
    def maxProfit(self, prices: list[int]) -> int:
        bestBuy = prices[0]
        maxProfit = 0
        for i in range(1, len(prices)):
            if bestBuy < prices[i]:
                maxProfit = max(maxProfit, prices[i] - bestBuy)
            bestBuy = min(bestBuy, prices[i])
        return maxProfit