class Solution:
    def rearrangeArray(self, nums: list[int]) -> list[int]:
        arr = [0]*len(nums)
        pos = 0
        neg = 1
        for i in range(len(nums)):
            if nums[i]>0:
                arr[pos]=nums[i]
                pos+=2
            
            elif nums[i]<0:
                arr[neg]=nums[i]
                neg+=2
        
        return arr