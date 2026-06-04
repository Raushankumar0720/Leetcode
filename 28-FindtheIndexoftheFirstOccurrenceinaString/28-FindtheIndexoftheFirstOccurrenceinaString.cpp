// Last updated: 6/4/2026, 11:15:12 AM
1class Solution {
2public:
3    int strStr(string haystack, string needle) {
4        if (needle.empty()) return 0;
5        
6        int n = haystack.size();
7        int m = needle.size();
8        
9        // Build LPS array
10        vector<int> lps(m, 0);
11        int len = 0, i = 1;
12        while (i < m) {
13            if (needle[i] == needle[len]) {
14                lps[i++] = ++len;
15            } else {
16                if (len != 0) {
17                    len = lps[len - 1];
18                } else {
19                    lps[i++] = 0;
20                }
21            }
22        }
23        
24        // KMP search
25        i = 0; // haystack index
26        int j = 0; // needle index
27        while (i < n) {
28            if (haystack[i] == needle[j]) {
29                i++; j++;
30                if (j == m) return i - j; // match found
31            } else {
32                if (j != 0) {
33                    j = lps[j - 1];
34                } else {
35                    i++;
36                }
37            }
38        }
39        
40        return -1;
41    }
42};
43