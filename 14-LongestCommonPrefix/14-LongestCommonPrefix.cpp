// Last updated: 4/14/2026, 3:26:40 PM
1class Solution {
2public:
3    string longestCommonPrefix(vector<string>& strs) {
4        if (strs.empty()) return "";
5
6        string prefix = strs[0]; // assume first string is prefix
7
8        for (int i = 1; i < strs.size(); i++) {
9            // jab tak current string prefix se start nahi hoti
10            while (strs[i].find(prefix) != 0) {
11                prefix.pop_back(); // ek character hatao
12                if (prefix.empty()) return ""; // agar khali ho gaya toh no prefix
13            }
14        }
15        return prefix;
16    }
17};
18