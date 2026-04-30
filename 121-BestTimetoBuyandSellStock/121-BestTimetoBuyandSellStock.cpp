// Last updated: 4/30/2026, 10:13:38 AM
1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4        int minPrice = INT_MAX;   
5        int maxProfit = 0;        
6
7        for (int currentPrice : prices) {
8            if (currentPrice < minPrice) {
9                minPrice = currentPrice;
10            }
11            int profit = currentPrice - minPrice;
12            if (profit > maxProfit) {
13                maxProfit = profit;
14            }
15        }
16        return maxProfit;
17    }
18};