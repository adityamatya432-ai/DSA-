class Solution:
    def minOperations(self, nums: List[int], k: int) -> int:
        sum = 0
        for i in range(len(nums)):
            sum+=nums[i]

        ans = 0
        while sum%k!=0:
            sum-=1
            ans+=1

        return ans