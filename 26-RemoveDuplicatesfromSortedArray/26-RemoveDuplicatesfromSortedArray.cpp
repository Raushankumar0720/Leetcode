// Last updated: 3/14/2026, 10:04:27 PM
1class Solution {
2public:
3    int removeDuplicates(vector<int>& nums) {
4        if (nums.empty()) return 0;
5
6        int k = 1; // pointer for next unique position
7
8        for (int i = 1; i < nums.size(); i++) {
9            if (nums[i] != nums[i - 1]) {
10                nums[k] = nums[i];
11                k++;
12            }
13        }
14
15        return k;
16    }
17};
18