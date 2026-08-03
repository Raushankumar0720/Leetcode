// Last updated: 8/3/2026, 5:37:15 PM
class Solution {
public:
    string reverseWords(string s) {

        string word = "";
        string ans = "";

        for (auto ch : s) {
            if (ch == ' ') {
                int i = 0;
                int j = word.size() - 1;
                while (i < j) {
                    swap(word[i], word[j]);

                    i++;
                    j--;
                }
                ans += word;
                ans += ' ';
                word = "";
            } else {
                word += ch;
            }
        }
        reverse(word.begin(),word.end());
        ans += word;

        return ans;
    }
};