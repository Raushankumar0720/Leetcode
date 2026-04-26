// Last updated: 4/26/2026, 11:57:27 PM
1class Solution {
2public:
3    int firstMissingPositive(vector<int>& nums) {
4        int n = nums.size();
5        
6        // Rearrangement phase
7        for (int i = 0; i < n; i++) {
8            while (nums[i] > 0 && nums[i] <= n && nums[i] != nums[nums[i] - 1]) {
9                swap(nums[i], nums[nums[i] - 1]);
10            }
11        }
12        
13        // Scanning phase
14        for (int i = 0; i < n; i++) {
15            if (nums[i] != i + 1) return i + 1;
16        }
17        
18        return n + 1;
19    }
20};
21