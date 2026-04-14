// Last updated: 4/14/2026, 3:37:27 PM
1class Solution {
2public:
3    string longestCommonPrefix(vector<string>& strs) {
4        if (strs.empty())
5            return "";
6
7        string Prefix = strs[0];
8
9        for (int i = 1; i < strs.size(); i++) {
10            while (strs[i].find(Prefix) != 0) {
11                Prefix.pop_back();
12                if (Prefix.empty())
13                    return "";
14            }
15        }
16        return Prefix;
17    }
18};