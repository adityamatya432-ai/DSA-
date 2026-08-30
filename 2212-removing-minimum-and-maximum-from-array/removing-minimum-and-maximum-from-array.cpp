class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        if(nums.size()==1)return 1;
        int mini = *min_element(nums.begin(), nums.end());
        int maxi = *max_element(nums.begin(), nums.end());

        int cntBegin = 0;
        int i = 0;
        vector<int>left;
        while(left.size()!=2){
            if(nums[i]==mini || nums[i]==maxi)left.push_back(nums[i]);
            i++;
            cntBegin++;
        }
        int cntEnd = 0;
        int j = nums.size()-1;
        vector<int>right;
        while(right.size()!=2){
            if(nums[j]==mini || nums[j]==maxi)right.push_back(nums[j]);
            j--;
            cntEnd++;
        }
        int cntBothLeft = 1;
        int p = 0;
        while(nums[p]!=mini && nums[p]!=maxi){
            p++;
            cntBothLeft++;
        }

        int cntBothRight = 1;
        int q = nums.size()-1;
        while(nums[q]!=mini && nums[q]!=maxi){
            q--;
            cntBothRight++;
        }

        int cnt = cntBothLeft+cntBothRight;
        
        return min(min(cntBegin,cntEnd),cnt);
    }
};