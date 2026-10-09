class Solution:
    def replaceElements(self, arr: list[int]) -> list[int]:
        ans = [0]*len(arr)
        ans[len(arr)-1]=-1
        maxi = arr[len(arr)-1]

        for i in range(len(arr)-2,-1,-1):
            ans[i]=maxi
            maxi = max(arr[i],maxi)
        
        return ans