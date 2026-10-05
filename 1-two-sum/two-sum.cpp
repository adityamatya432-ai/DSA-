class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int>mp;
        vector<int>ans;
        for(int i = 0;i<n;i++){
            int x = nums[i];
            if(mp.find(target-x)==mp.end()){
                mp[x]=i;
            }
            else{
                ans.push_back(i);
                ans.push_back(mp[target-x]);
            }
        }
        return ans;
    }
};