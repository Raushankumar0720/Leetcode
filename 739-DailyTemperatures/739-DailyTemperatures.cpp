// Last updated: 4/30/2026, 11:17:11 AM
1class Solution {
2public:
3    vector<int> dailyTemperatures(vector<int>& temperatures) {
4    int n = temperatures.size();
5    vector<int> ans(n, 0);
6    vector<int> index; 
7
8    for (int i = 0; i < n; i++) {
9        while (!index.empty() && temperatures[i] > temperatures[index.back()]) {
10            int idx = index.back();
11            index.pop_back();
12            ans[idx] = i - idx;
13        }
14        index.push_back(i);
15    }
16    return ans;
17}
18};