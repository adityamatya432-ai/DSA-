class Solution:
    def minOperations(self, boxes: str) -> list[int]:
        
        ans = [0]*len(boxes)

        for i in range(len(boxes)):
            for j in range(0,i):
                if boxes[j]=='1':
                    ans[i]+=i-j

            for j in range(i+1,len(boxes)):
                if boxes[j]=='1':
                    ans[i]+=j-i

        return ans