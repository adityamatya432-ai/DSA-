class Solution:
    def majorityElement(self, nums: list[int]) -> int:
        
        x = None
        cnt = 0
        for n in nums:
            if cnt==0:
                x = n
                cnt+=1
            elif cnt>0 and n==x:
                cnt+=1
            else:
                cnt-=1
        
        return x