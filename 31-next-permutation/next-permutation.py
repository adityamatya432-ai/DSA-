class Solution:
    def nextPermutation(self, nums: list[int]) -> None:

        idx = -1
        for i in range(len(nums)-2,-1,-1):
            if nums[i]<nums[i+1]:
                idx = i
                break
            
        if idx == -1:
            nums.reverse()
            return
            
        for i in range(len(nums)-1,idx,-1):
            if nums[i]>nums[idx]:
                nums[i],nums[idx] = nums[idx],nums[i]
                break
            
        nums[idx+1:len(nums)] = nums[idx+1:len(nums)][::-1]


        