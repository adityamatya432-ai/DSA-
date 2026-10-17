class Solution:
    def minimumOperations(self, nums: List[int]) -> int:
        
        ans = 0
        for x in nums:
            if x%3!=0:
                ans+=1

        return ans