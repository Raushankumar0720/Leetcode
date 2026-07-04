// Last updated: 7/4/2026, 11:28:53 PM
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int freq[26] = {0};

        // Count available letters
        for (char c : magazine) {
            freq[c - 'a']++;
        }

        // Consume required letters
        for (char c : ransomNote) {
            int idx = c - 'a';

            if (freq[idx] == 0) {
                return false;
            }

            freq[idx]--;
        }

        return true;
    }
};