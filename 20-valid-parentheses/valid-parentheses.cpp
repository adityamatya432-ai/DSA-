class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        bool ans = false;
        stack<char>st;
        for(int i = 0;i<n;i++){
            if(s[i]=='(' || s[i]== '[' || s[i]== '{'){
                st.push(s[i]);
            }
            else if(st.size()==0 && (s[i]==')' || s[i]== ']' || s[i]== '}')){
                ans= false;
                break;
            }
            else if(s[i]==']' && st.top()=='['){
                ans = true;
                st.pop();
            }
            else if(s[i]==')' && st.top()=='('){
                ans = true;
                st.pop();
            }
            else if(s[i]=='}' && st.top()=='{'){
                ans = true;
                st.pop();
            }
            else{
                ans = false;
                break;
            }
        }
        if(st.size()>0)return false;
        return ans;
    }
};