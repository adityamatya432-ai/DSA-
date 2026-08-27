class Solution {
public:
    string reverseWords(string s) {
        int i = 0;
        
        while (i < s.size()) {
            int j = i;

            // Find the end of the current word
            while (j < s.size() && s[j] != ' ') {
                j++;
            }

            // Reverse the current word
            reverse(s.begin() + i, s.begin() + j);

            // Move i to the next word
            i = j + 1;
        }

        return s;
    }
};