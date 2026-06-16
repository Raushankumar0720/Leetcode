// Last updated: 6/16/2026, 11:03:55 PM
class Solution {
public:
    string reversePrefix(string word, char ch) {
        int idx = word.find(ch);
        if (idx == string::npos) return word;
        reverse(word.begin(), word.begin() + idx + 1);
        return word;
    }
};
