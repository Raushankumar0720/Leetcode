// Last updated: 7/4/2026, 11:27:47 PM
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