// Last updated: 7/4/2026, 11:29:33 PM
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;   
        int maxProfit = 0;        

        for (int currentPrice : prices) {
            if (currentPrice < minPrice) {
                minPrice = currentPrice;
            }
            int profit = currentPrice - minPrice;
            if (profit > maxProfit) {
                maxProfit = profit;
            }
        }
        return maxProfit;
    }
};