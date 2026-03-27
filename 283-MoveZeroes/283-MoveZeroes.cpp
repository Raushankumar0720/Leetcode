// Last updated: 3/27/2026, 11:55:23 PM
1class Solution {
2public:
3    void moveZeroes(vector<int>& nums) {
4        int index = 0;
5        
6        // Step 1: Copy non-zero elements forward
7        for (int i = 0; i < nums.size(); i++) {
8            if (nums[i] != 0) {
9                nums[index++] = nums[i];
10            }
11        }
12        
13        // Step 2: Fill remaining positions with zeros
14        while (index < nums.size()) {
15            nums[index++] = 0;
16        }
17    }
18};
19