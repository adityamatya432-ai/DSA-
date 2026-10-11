class Solution:
    def sumOfSquares(self, nums: List[int]) -> int:
        ans = 0
        n = len(nums)
        for i in range(len(nums)):
            if n%(i+1)==0:
                sq = nums[i]*nums[i]
                ans+=sq
            
        return ans