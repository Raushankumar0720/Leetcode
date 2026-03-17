// Last updated: 3/17/2026, 11:54:46 PM
1/**
2 * @param {number[]} prices
3 * @return {number}
4 */
5var maxProfit = function(prices) {
6    let minPrice = prices[0];
7  let maxProfit = 0;
8
9  for (let i = 1; i < prices.length; i++) {
10    if (prices[i] < minPrice) {
11      minPrice = prices[i]; // update minimum
12    } else {
13      maxProfit = Math.max(maxProfit, prices[i] - minPrice);
14    }
15  }
16
17  return maxProfit;
18
19};