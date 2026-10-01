class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();
        unordered_map<int,int>mp;
        for(int i = 0;i<n;i++){
            mp[nums[i]]=1;
        }
        for(int i = 0;i<=n;i++){
            if(mp[i]==0){
                ans=i;
                break;
            }
        }
        return ans;
    }
};