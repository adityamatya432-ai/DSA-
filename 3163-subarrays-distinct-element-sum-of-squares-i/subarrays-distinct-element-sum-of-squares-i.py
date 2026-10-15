class Solution:
    def sumCounts(self, nums: List[int]) -> int:
        sum = 0
        for i in range(len(nums)):
            st = set()
            for j in range(i,len(nums)):
                st.add(nums[j])
                el = len(st)
                sum += el*el

        return sum