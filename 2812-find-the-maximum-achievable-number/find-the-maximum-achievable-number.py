class Solution:
    def theMaximumAchievableX(self, num: int, t: int) -> int:
        t*=2
        num+=t

        return num