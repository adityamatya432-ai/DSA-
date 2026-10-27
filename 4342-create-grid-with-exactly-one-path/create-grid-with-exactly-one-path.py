class Solution:
    def createGrid(self, m: int, n: int) -> list[str]:

        ans = []
        for i in range(m):
            s = ""
            for j in range(n):
                if i == 0:
                    s+="."
                elif i!=0 and j==n-1:
                    s+="."
                else:
                    s+="#"

            ans.append(s)

        return ans