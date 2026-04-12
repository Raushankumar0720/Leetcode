// Last updated: 4/12/2026, 11:11:03 PM
1class Solution {
2public:
3    int removeElement(vector<int>& nums, int val) {
4    int k = 0; // position for next non-val element
5    for (int i = 0; i < nums.size(); i++) {
6        if (nums[i] != val) {
7            nums[k] = nums[i];
8            k++;
9        }
10    }
11    return k; // new length
12}
13
14};