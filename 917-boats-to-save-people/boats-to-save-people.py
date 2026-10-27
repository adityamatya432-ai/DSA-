class Solution:
    def numRescueBoats(self, people: list[int], limit: int) -> int:
        
        people.sort()

        i = 0
        j = len(people)-1

        ans = 0
        while i<=j:
            if people[i]+people[j]<=limit:
                i+=1
            ans+=1
            j-=1

        return ans