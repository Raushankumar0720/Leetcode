// Last updated: 5/20/2026, 1:36:42 PM
1class Solution {
2public:
3    int lengthOfLongestSubstring(string s) {
4        int freq[256] = {0};
5
6        int left = 0;
7        int maxLen = 0;
8
9        for (int right = 0; right < s.size(); right++) {
10            char ch = s[right];
11            freq[ch]++;
12
13            // Duplicate found, shrink window
14            while (freq[ch] > 1) {
15                freq[s[left]]--;
16                left++;
17            }
18
19            // Current valid window length
20            int windowLen = right - left + 1;
21            maxLen = max(maxLen, windowLen);
22        }
23
24        return maxLen;
25    }
26};