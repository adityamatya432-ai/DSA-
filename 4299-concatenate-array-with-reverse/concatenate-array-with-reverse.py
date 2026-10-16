class Solution:
    def concatWithReverse(self, nums: list[int]) -> list[int]:
        reverse = []
        for i in range(len(nums)-1,-1,-1):
            reverse.append(nums[i])

        ans = []

        for x in nums:
            ans.append(x)
        
        for y in reverse:
            ans.append(y)

        return ans