// Last updated: 6/26/2026, 10:28:50 PM
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