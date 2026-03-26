// Last updated: 3/26/2026, 11:38:06 PM
1class Solution {
2public:
3    int maxSubArray(vector<int>& nums) {
4        int currentSum = nums[0];
5        int maxSum = nums[0];
6        
7        for (int i = 1; i < nums.size(); i++) {
8            // Either extend the current subarray or start fresh from nums[i]
9            currentSum = max(nums[i], currentSum + nums[i]);
10            maxSum = max(maxSum, currentSum);
11        }
12        
13        return maxSum;
14    }
15};
16