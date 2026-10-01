class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        for(int i = 1;i<=n;i++){
            int flag = 0;
            for(int j = 0;j<n;j++){
                if(nums[j]==i){
                    flag = 1;
                    break;
                }
            }
            if(flag == 0){
                ans = i;
                break;
            }
        }
        return ans;
    }
};