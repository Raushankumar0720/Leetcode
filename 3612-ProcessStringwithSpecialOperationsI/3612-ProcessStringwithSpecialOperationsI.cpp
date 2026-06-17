// Last updated: 6/17/2026, 11:02:37 AM
1class Solution {
2public:
3    string processStr(string s) {
4        string result = "" ;
5
6
7        for (char c : s) {
8            if (isalpha(c)) {
9                result.push_back(c);
10            } else if (c == '*') {
11                if (!result.empty()) result.pop_back();
12            } else if (c == '#') {
13                result += result;
14            } else if (c == '%') {
15                reverse(result.begin(), result.end());
16            }
17        }
18        return result;
19    }
20};