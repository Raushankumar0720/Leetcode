// Last updated: 6/17/2026, 11:05:39 AM
1class Solution {
2public:
3    string processStr(string s) {
4        string res = "";
5
6        for (char ch : s) {
7            if (ch == '#') {
8                res += res;
9            } else if (ch == '%') {
10                reverse(res.begin(), res.end());
11            } else if (ch == '*') {
12                if (!res.empty()) {
13                    res.pop_back();
14                }
15            } else {
16                res += ch;
17            }
18        }
19        return res;
20    }
21};