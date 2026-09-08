// Last updated: 9/8/2026, 9:49:05 AM
class Solution {
public:
    int countKeyChanges(string s) {
        int ans = 0;
        for (int i = 1; i < s.length(); i++) {
            if (tolower(s[i]) != tolower(s[i - 1])) {
                ans++;
            }
        }
        return ans;
    }
};