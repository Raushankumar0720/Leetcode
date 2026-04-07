// Last updated: 4/7/2026, 10:10:54 AM
1class Solution {
2public:
3    void moveZeroes(vector<int>& nums) {
4        int index = 0;
5        
6        for (int i = 0; i < nums.size(); i++) {
7            if (nums[i] != 0) {
8                nums[index++] = nums[i];
9            }
10        }
11        
12        while (index < nums.size()) {
13            nums[index++] = 0;
14        }
15    }
16};
17