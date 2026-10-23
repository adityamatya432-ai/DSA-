class Solution:
    def canJump(self, nums: list[int]) -> bool:
        
        arr = [0]*len(nums)

        maxi = 0
        for i in range(len(nums)):
            if maxi<i:
                return False
            maxi = max(nums[i]+i,maxi)


        return True
            
            
