class Solution {
public:
    bool toCheck(vector<int>&v){
        int n = v.size();
        for(int p = 0;p<n-1;p++){
            if(v[p]>v[p+1])return false;
        }
        return true;
    }
    bool check(vector<int>& nums) {
        // bruteforce approach
        int n = nums.size();
        for(int i = 0;i<n;i++){
            vector<int>v;
            for(int j=i;j<n;j++){
                v.push_back(nums[j]);
            }
            for(int j = 0;j<i;j++){
                v.push_back(nums[j]);
            }
            if(toCheck(v)==true)return true;
        }
        return false;
    }
};