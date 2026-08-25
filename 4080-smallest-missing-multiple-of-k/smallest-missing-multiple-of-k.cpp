class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        set<int>st(nums.begin(),nums.end());
        int n = k;
        int i = 1;
        while(st.find(k)!=st.end()){
            st.erase(k);
            i++;
            k=n*i;
        }
        return k;
    }
};