// Last updated: 7/4/2026, 11:28:03 PM
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth = 0;
        for (auto& customer : accounts) {
            int sum = accumulate(customer.begin(), customer.end(), 0);
            maxWealth = max(maxWealth, sum);
        }
        return maxWealth;
    }
};