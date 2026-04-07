// Last updated: 4/7/2026, 9:42:05 AM
1class Solution {
2public:
3    int majorityElement(vector<int>& nums) {
4        int candidate = 0;
5        int count = 0;
6
7        for (int num : nums) {
8            if (count == 0) {
9                candidate = num;
10            }
11            count += (num == candidate) ? 1 : -1;
12        }
13
14        return candidate;
15    }
16};
17