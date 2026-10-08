class Solution:
    def maxSubArray(self, nums: list[int]) -> int:
        
        sum = 0
        maxi = float('-inf')

        for n in nums:
            sum+=n
            if sum>0:
                maxi = max(maxi,sum)
            else:
                maxi = max(maxi,sum)
                sum=0
        
        return maxi