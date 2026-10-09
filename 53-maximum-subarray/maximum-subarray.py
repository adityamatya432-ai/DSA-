class Solution:
    def maxSubArray(self, nums: list[int]) -> int:
        
        sum = 0
        maxi = float('-inf')

        for n in nums:
            sum+=n
            maxi = max(sum,maxi)
            if sum<0:
                sum=0
        
        return maxi