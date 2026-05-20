// Last updated: 5/20/2026, 1:30:06 PM
1class Solution {
2public:
3    bool canConstruct(string ransomNote, string magazine) {
4        int freq[26] = {0};
5
6        // Count available letters
7        for (char c : magazine) {
8            freq[c - 'a']++;
9        }
10
11        // Consume required letters
12        for (char c : ransomNote) {
13            int idx = c - 'a';
14
15            if (freq[idx] == 0) {
16                return false;
17            }
18
19            freq[idx]--;
20        }
21
22        return true;
23    }
24};