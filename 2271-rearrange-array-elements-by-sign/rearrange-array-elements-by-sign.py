class Solution:
    def rearrangeArray(self, nums: list[int]) -> list[int]:
        
        pos = []
        neg = []

        for n in nums:
            if(n>0):
                pos.append(n)
            elif(n<0):
                neg.append(n)

        for i in range(len(nums)//2):
            nums[i*2]=pos[i]
            nums[i*2+1]=neg[i]
        
        return  nums