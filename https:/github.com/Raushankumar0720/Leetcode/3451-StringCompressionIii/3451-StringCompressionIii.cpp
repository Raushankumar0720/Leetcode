// Last updated: 8/2/2026, 12:03:52 AM
class Solution {
public:
    string compressedString(string word) {
        string res = "";
        int n = word.size();
        int count = 1;

        for (int i = 1; i <= n; i++) {
            if (i < n && word[i] == word[i-1] && count < 9) {
                count++;
            } else {
                res += to_string(count) + word[i-1];
                count = 1;
            }
        }
        return res;
    }
};
