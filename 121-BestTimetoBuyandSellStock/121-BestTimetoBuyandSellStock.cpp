// Last updated: 4/1/2026, 10:48:20 PM
1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4        int minPrice = INT_MAX;   // lowest price seen so far
5        int maxProfit = 0;        // best profit so far
6
7        for (int price : prices) {
8            // update min price if current is lower
9            if (price < minPrice) {
10                minPrice = price;
11            }
12            // check profit if sold today
13            int profit = price - minPrice;
14            if (profit > maxProfit) {
15                maxProfit = profit;
16            }
17        }
18        return maxProfit;
19    }
20};
21