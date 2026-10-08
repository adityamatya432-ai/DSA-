class Solution:
    def sortColors(self, nums: list[int]) -> None:
        mp = {}

        for n in nums:
            if n in mp:
                mp[n] += 1
            else:
                mp[n] = 1

        for i in range(mp.get(0, 0)):
            nums[i] = 0

        for i in range(mp.get(0, 0), mp.get(0, 0) + mp.get(1, 0)):
            nums[i] = 1

        for i in range(mp.get(0, 0) + mp.get(1, 0),
                       mp.get(0, 0) + mp.get(1, 0) + mp.get(2, 0)):
            nums[i] = 2