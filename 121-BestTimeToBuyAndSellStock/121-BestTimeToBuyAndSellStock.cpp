// Last updated: 4/11/2026, 3:57:38 PM
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;   // lowest price seen so far
        int maxProfit = 0;        // best profit so far

        for (int price : prices) {
            // update min price if current is lower
            if (price < minPrice) {
                minPrice = price;
            }
            // check profit if sold today
            int profit = price - minPrice;
            if (profit > maxProfit) {
                maxProfit = profit;
            }
        }
        return maxProfit;
    }
};
