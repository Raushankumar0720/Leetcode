// Last updated: 5/22/2026, 11:54:49 PM
1class Solution {
2public:
3    int maximumWealth(vector<vector<int>>& accounts) {
4        int maxWealth = 0;
5        for (auto& customer : accounts) {
6            int sum = accumulate(customer.begin(), customer.end(), 0);
7            maxWealth = max(maxWealth, sum);
8        }
9        return maxWealth;
10    }
11};