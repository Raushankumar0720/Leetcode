// Last updated: 4/16/2026, 10:41:48 PM
1class Solution {
2public:
3    int missingNumber(vector<int>& nums) {
4        sort(nums.begin(), nums.end());
5        int n = nums.size();
6        
7        for (int i = 0; i < n; i++) {
8            if (nums[i] != i) return i;
9        }
10        return n; 
11    }
12};
13