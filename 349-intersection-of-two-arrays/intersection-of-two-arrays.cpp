class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        int n = nums1.size();
        int m = nums2.size();

        vector<int>ans;
        unordered_set<int>an;
        if(n>=m){
            unordered_set<int>st(nums1.begin(),nums1.end());
            for(int i=0;i<m;i++){
                if(st.find(nums2[i])!=st.end()){
                    ans.push_back(nums2[i]);
                    st.erase(nums2[i]);
                }
            }
        }
        else{
            unordered_set<int>st(nums2.begin(),nums2.end());
            for(int i=0;i<n;i++){
                if(st.find(nums1[i])!=st.end()){
                    ans.push_back(nums1[i]);
                    st.erase(nums1[i]);
                }
            }
        }
        return ans;
    }
};