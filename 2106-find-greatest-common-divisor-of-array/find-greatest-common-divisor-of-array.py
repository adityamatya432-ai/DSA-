class Solution:
    def findGCD(self, nums: list[int]) -> int:
        
        small = float('inf')
        large = float('-inf')

        for x in nums:
            small = min(small,x)
            large = max(large,x)

        ans = float('-inf')
        for i in range(1,small+1):
            if large%i==0 and small%i==0:
                ans = max(ans,i)

        return ans