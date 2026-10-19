class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {

        vector<int>ans;
        int n = nums.size();
        int cntLeft = 0;
        int cntRight = 0;
        for(int i = 0;i<n;i++){
            if(nums[i]<target){
                cntLeft++;
            }

            else if(nums[i]>target){
                cntRight++;
            }
        }

        for(int j = cntLeft;j<n-cntRight;j++){
            ans.push_back(j);
        }

        return  ans;
    }
};