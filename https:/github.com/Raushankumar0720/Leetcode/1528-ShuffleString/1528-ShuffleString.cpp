// Last updated: 9/8/2026, 9:50:23 AM
class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n = s.size();
        string result(n, ' '); // initialize with spaces
        for(int i = 0; i < n; i++) {
            result[indices[i]] = s[i];
        }
        return result;
    }
};
