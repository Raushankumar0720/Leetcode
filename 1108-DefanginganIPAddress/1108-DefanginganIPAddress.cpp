// Last updated: 5/25/2026, 1:10:01 PM
1class Solution {
2public:
3    string defangIPaddr(string address) {
4        string result;
5        for (char c : address) {
6            if (c == '.') {
7                result += "[.]";
8            } else {
9                result += c;
10            }
11        }
12        return result;
13    }
14};
15