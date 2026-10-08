class Solution:
    def majorityElement(self, nums: list[int]) -> int:
    
        mp={}
        for n in nums:
            if n in mp:
                mp[n]+=1
            else:
                mp[n]=1
        
        x = len(nums)//2

        ans = None
        for key,value in mp.items():
            if value>x:
                return key
