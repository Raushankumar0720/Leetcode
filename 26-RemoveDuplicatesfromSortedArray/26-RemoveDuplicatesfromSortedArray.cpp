// Last updated: 3/14/2026, 10:06:22 PM
1// class Solution {
2// public:
3//     int removeDuplicates(vector<int>& nums) {
4//         if (nums.empty()) return 0;
5
6//         int k = 1; // pointer for next unique position
7
8//         for (int i = 1; i < nums.size(); i++) {
9//             if (nums[i] != nums[i - 1]) {
10//                 nums[k] = nums[i];
11//                 k++;
12//             }
13//         }
14
15//         return k;
16//     }
17// };
18
19// brute force using STL
20
21class Solution {
22public:
23    int removeDuplicates(vector<int>& nums) {
24        set<int> s(nums.begin(), nums.end()); // unique elements automatically
25        int k = s.size();
26
27        // copy back into nums
28        int i = 0;
29        for (int val : s) {
30            nums[i++] = val;
31        }
32
33        return k;
34    }
35};
36
37