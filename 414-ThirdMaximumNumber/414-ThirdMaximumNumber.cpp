// Last updated: 6/4/2026, 9:59:04 PM
1class Solution {
2public:
3    int thirdMax(vector<int>& nums) {
4        long long max3 = LONG_MIN, max2 = LONG_MIN, max1 = LONG_MIN;
5        for (int num : nums) {
6            if (num == max1 || num == max2 || num == max3)
7                continue; // agar same num aaye to skip kr do
8
9            if (num > max1) {
10                max3 = max2;
11                max2 = max1;
12                max1 = num;
13            }
14
15            else if (num > max2) {
16                max3 = max2;
17                max2 = num;
18            } else if (num > max3) {
19                max3 = num;
20            }
21        }
22        if (max3 == LONG_MIN)
23            return max1;
24        return max3;
25    }
26};