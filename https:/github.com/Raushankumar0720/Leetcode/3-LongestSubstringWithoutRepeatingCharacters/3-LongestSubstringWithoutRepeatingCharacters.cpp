// Last updated: 7/6/2026, 11:44:15 PM
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int freq[256] = {0};

        int left = 0;
        int maxLen = 0;

        for (int right = 0; right < s.size(); right++) {
            char ch = s[right];
            freq[ch]++;

            // Duplicate found, shrink window
            while (freq[ch] > 1) {
                freq[s[left]]--;
                left++;
            }

            // Current valid window length
            int windowLen = right - left + 1;
            maxLen = max(maxLen, windowLen);
        }

        return maxLen;
    }
};