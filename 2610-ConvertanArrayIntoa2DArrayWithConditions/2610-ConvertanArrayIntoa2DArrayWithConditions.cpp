// Last updated: 6/13/2026, 2:13:43 PM
1class Solution {
2public:
3    vector<vector<int>> findMatrix(vector<int>& nums) {
4        unordered_map<int,int> freq;
5        for(int x : nums) freq[x]++;
6
7        int rows = 0;
8        for(auto &p : freq) rows = max(rows, p.second);
9
10        vector<vector<int>> ans(rows);
11        for(auto &p : freq) {
12            int val = p.first, count = p.second;
13            for(int i = 0; i < count; i++) {
14                ans[i].push_back(val);
15            }
16        }
17        return ans;
18    }
19};
20