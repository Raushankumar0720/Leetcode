// Last updated: 3/26/2026, 11:29:24 PM
1
2class Solution {
3public:
4    bool containsDuplicate(vector<int>& nums) {
5        sort(nums.begin(), nums.end()); // O(n log n)
6        for (int i = 1; i < nums.size(); i++) {
7            if (nums[i] == nums[i - 1]) {
8                return true; // Duplicate found
9            }
10        }
11        return false; // No duplicates
12    }
13};
14