// Last updated: 4/7/2026, 9:44:25 AM
1class Solution {
2public:
3    int majorityElement(vector<int>& nums) {
4        int element = 0;
5        int count = 0;
6
7        for (int num : nums) {
8            if (count == 0) {
9                element = num;
10            }
11            count += (num == element) ? 1 : -1;
12        }
13
14        return element;
15    }
16};
17