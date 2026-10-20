class Solution:
    def mapWordWeights(self, words: List[str], weights: List[int]) -> str:
        
        ans = ""

        for x in words:
            count = 0
            for y in x:
                n = ord(y)
                first = ord('a')
                num = n-first
                count+=weights[num]
            
            count%=26
            letter = ord('a')+26-count-1
            char = chr(letter)
            ans+=char

        return ans
