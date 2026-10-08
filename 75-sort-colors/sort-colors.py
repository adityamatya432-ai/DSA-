class Solution:
    def sortColors(self, nums: list[int]) -> None:
        cnt0=0
        cnt1=0
        cnt2=0

        for n in nums:
            if n==0:
                 cnt0+=1
            elif n==1:
                 cnt1+=1
            elif n==2:
                 cnt2+=1
        
        for i in range(0,cnt0):
            nums[i]=0

        for i in range(cnt0,cnt1+cnt0):
            nums[i]=1

        for i in range(cnt1+cnt0,cnt1+cnt0+cnt2):
            nums[i]=2

        