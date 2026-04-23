// Last updated: 4/23/2026, 10:17:20 PM
1class Solution {
2public:
3    int singleNumber(vector<int>& nums) {
4        int res = 0;
5        for (int num : nums) {
6            res ^= num;           // XOR each element
7        }
8        return res;
9    }
10};
11