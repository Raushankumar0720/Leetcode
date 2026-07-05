// Last updated: 7/5/2026, 11:47:34 PM
class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.empty()) return 0;
        
        int n = haystack.size();
        int m = needle.size();
        
        // Build LPS array
        vector<int> lps(m, 0);
        int len = 0, i = 1;
        while (i < m) {
            if (needle[i] == needle[len]) {
                lps[i++] = ++len;
            } else {
                if (len != 0) {
                    len = lps[len - 1];
                } else {
                    lps[i++] = 0;
                }
            }
        }
        
        // KMP search
        i = 0; // haystack index
        int j = 0; // needle index
        while (i < n) {
            if (haystack[i] == needle[j]) {
                i++; j++;
                if (j == m) return i - j; // match found
            } else {
                if (j != 0) {
                    j = lps[j - 1];
                } else {
                    i++;
                }
            }
        }
        
        return -1;
    }
};
