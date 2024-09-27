class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        best_buy = prices[0]
        max_profit = 0

        for price in prices[1:]:
            if price > best_buy:
                max_profit = max(max_profit, price - best_buy)
            best_buy = min(best_buy, price)
        
        return max_profit
        