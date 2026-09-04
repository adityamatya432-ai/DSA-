class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>maxi(n);
        vector<int>mini(n);
        int maxV = INT_MIN;
        int minV = INT_MAX;
        for(int i = 0;i<n;i++){
            maxV = max(maxV,nums[i]);
            maxi[i]=maxV;
            minV = min(minV,nums[n-i-1]);
            mini[n-i-1]=minV;
        }
        int score = 0;
        for(int i = 0;i<n;i++){
            score = maxi[i]-mini[i];
            if(score<=k)return i;
        }
        return -1;
    }
};