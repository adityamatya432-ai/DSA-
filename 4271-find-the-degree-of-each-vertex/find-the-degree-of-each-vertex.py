class Solution:
    def findDegrees(self, matrix: list[list[int]]) -> list[int]:

        mp = {}
        for i in range(len(matrix)):
            for j in range(len(matrix[0])):
                if matrix[i][j]==1:
                    if j in mp:
                        mp[j]+=1
                    else:
                        mp[j]=1

        ans = []

        for i in range(len(matrix)):
            if i in mp:
                ans.append(mp[i])
            else:
                ans.append(0)
        
        return ans
            