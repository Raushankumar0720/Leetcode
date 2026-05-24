// Last updated: 5/24/2026, 7:31:01 PM
1class Solution {
2public:
3   int numIdenticalPairs(vector<int>& nums) {
4    unordered_map<int,int> freq;
5    int count = 0;
6    for(int num : nums) {
7        count += freq[num];   // each previous occurrence forms a pair
8        freq[num]++;          // update frequency
9    }
10    return count;
11}
12
13};