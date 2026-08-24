class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& list) {

        int n = list.size();
        unordered_set<string>st(list.begin(),list.end());
        queue<pair<string,int>>q;
        q.push({beginWord,1});
        st.erase(beginWord);
        int ans = 0;
        while(!q.empty()){
            string word = q.front().first;
            int d = q.front().second;
            q.pop();
            if(word==endWord)ans=d;
            for(int i = 0;i<word.size();i++){
                char original = word[i];
                for(char ch = 'a';ch<='z';ch++){
                    word[i]=ch;
                    if(st.find(word)!=st.end()){
                        st.erase(word);
                        q.push({word,d+1});
                    }
                }
                word[i]=original;
            }
        }
        return ans;
    }
};