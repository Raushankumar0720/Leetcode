// Last updated: 6/13/2026, 1:58:45 PM
1class Solution {
2public:
3    string reversePrefix(string word, char ch) {
4        int idx = word.find(ch);
5        if (idx == string::npos) return word;
6        reverse(word.begin(), word.begin() + idx + 1);
7        return word;
8    }
9};
10