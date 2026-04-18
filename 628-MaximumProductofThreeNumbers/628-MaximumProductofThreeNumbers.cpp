// Last updated: 4/18/2026, 11:54:51 PM
1class Solution {
2public:
3    int maximumProduct(vector<int>& nums) {
4        sort(nums.begin(), nums.end());
5        int n = nums.size();
6        
7        int opt1 = nums[n-1] * nums[n-2] * nums[n-3];
8        
9        int opt2 = nums[0] * nums[1] * nums[n-1];
10        
11        return max(opt1, opt2);
12    }
13};
14