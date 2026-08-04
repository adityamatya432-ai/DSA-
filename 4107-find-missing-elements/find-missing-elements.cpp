class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<int>ans;
        unordered_map<int,int>mp;
        for(int i = 0;i<n;i++){
            mp[nums[i]]=1;
        }
        for(int j = nums[0];j<nums[n-1];j++){
            if(mp.find(j)==mp.end()){
                ans.push_back(j);
            }
        }
        return ans;
    }
};