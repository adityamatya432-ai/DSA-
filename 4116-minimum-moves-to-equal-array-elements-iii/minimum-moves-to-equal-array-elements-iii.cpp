class Solution {
public:
    int minMoves(vector<int>& nums) {
        int count = 0;
        sort(nums.begin(),nums.end());
        int maxi = nums[nums.size()-1];
        for(int i = 0;i<nums.size()-1;i++){
            count+=maxi-nums[i];
        }

        return count;
    }
};