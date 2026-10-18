class Solution:
    def findArray(self, pref: list[int]) -> list[int]:
        
        ans = [0]*(len(pref))

        ans[0]=pref[0]

        for i in range(len(pref)-1):
            ans[i+1]=pref[i]^pref[i+1]

        return ans