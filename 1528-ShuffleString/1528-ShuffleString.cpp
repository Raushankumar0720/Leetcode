// Last updated: 5/26/2026, 11:47:27 PM
1class Solution {
2public:
3    string restoreString(string s, vector<int>& indices) {
4        int n = s.size();
5        string result(n, ' '); // initialize with spaces
6        for(int i = 0; i < n; i++) {
7            result[indices[i]] = s[i];
8        }
9        return result;
10    }
11};
12