class Solution:
    def maxProfit(self, prices: list[int]) -> int:
        
        mini = prices[0]
        ans = 0
        for i in range(1,len(prices)):
            mini = min(mini,prices[i])
            diff = prices[i]-mini
            ans = max(diff,ans)
        
        return ans
