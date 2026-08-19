class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int i = 0;
        vector<vector<int>>ans;
        while(i<n-3){
            int j = i+1;
            while(j<n-2){
                int k = j+1;
                int l = n-1;            
                while(k<l){
                    long long sum = 1LL * nums[i] + nums[j] + nums[k] + nums[l];
                    if(sum>1LL*target)l--;
                    else if(sum<1LL*target)k++;
                    else if(sum==1LL*target){
                        vector<int>arr = {nums[i],nums[j],nums[k],nums[l]};
                        ans.push_back(arr);
                        k++;
                        while(k<=l && nums[k]==nums[k-1])k++;
                        l--;
                        while(l>=k && nums[l]==nums[l+1])l--;
                    }
                }
                j++;
                while(j<n-2 && nums[j]==nums[j-1])j++;
            }
            i++;
            while(i<n-3 && nums[i]==nums[i-1])i++;
        }        
        return ans;     
    }

};