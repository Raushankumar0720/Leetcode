// Last updated: 5/2/2026, 11:04:22 PM
1class Solution {
2public:
3    int countKeyChanges(string s) {
4        int ans = 0;
5        for (int i = 1; i < s.length(); i++) {
6            if (tolower(s[i]) != tolower(s[i - 1])) {
7                ans++;
8            }
9        }
10        return ans;
11    }
12};