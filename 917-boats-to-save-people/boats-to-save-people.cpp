class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {// TC : O(NlogN)+O(N) = O(NlogN) & SC : O(1)
        
        sort(people.begin(),people.end());// TC : O(NlogN)

        int n = people.size();
        int count = 0;

        int i=0;
        int j=n-1;

        while(i <= j){// TC : O(N)

            if(people[i]+people[j] <= limit){
                i++;
            }

            count++;
            j--;
        }

        return count;
    }
};