// Last updated: 5/24/2026, 7:32:24 PM
1class Solution {
2public:
3    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
4    int maxCandies = *max_element(candies.begin(), candies.end());
5    vector<bool> result;
6    for(int c : candies) {
7        result.push_back(c + extraCandies >= maxCandies);
8    }
9    return result;
10}
11
12};