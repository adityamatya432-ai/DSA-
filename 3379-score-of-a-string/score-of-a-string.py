class Solution:
    def scoreOfString(self, s: str) -> int:
        ans = 0
        for i in range(len(s)-1):
            if(s[i]>s[i+1]):
                ans+=ord(s[i])-ord(s[i+1])
            else:
                ans+=ord(s[i+1])-ord(s[i])

        return ans