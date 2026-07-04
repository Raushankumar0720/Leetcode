// Last updated: 7/4/2026, 11:28:04 PM
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
