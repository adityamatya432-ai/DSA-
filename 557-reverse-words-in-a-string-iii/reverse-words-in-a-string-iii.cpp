class Solution {
public:

    void reverse(string &s, int st , int end){
        string temp = s;
        int j = st;
        for(int i = end;i>=st;i--){
            temp[i]=s[j];
            j++;
        }
        s=temp;
    }
    string reverseWords(string s) {
        int n = s.size();
        int i = 0;
        int j = 0;
        while(j<=n){
            if(j==n-1){
                reverse(s,i,j);
            }
            else if(s[j]==' '){
                reverse(s,i,j-1);
                i=j+1;
            }
            j++;
        }
        return s;
    }
};