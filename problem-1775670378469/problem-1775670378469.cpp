// Last updated: 4/8/2026, 11:16:18 PM
1class Solution {
2public:
3    bool isAnagram(string s, string t) {
4        if (s.size() != t.size()) return false;
5
6        int count[26] = {0};
7
8        for (char c : s) count[c - 'a']++;
9        for (char c : t) {
10            if (--count[c - 'a'] < 0) return false;
11        }
12
13        return true;
14    }
15};
16