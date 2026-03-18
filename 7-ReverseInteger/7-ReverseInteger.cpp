// Last updated: 3/18/2026, 11:07:42 PM
1class Solution {
2public:
3    int reverse(int x) {
4        long long rev = 0;  // Use long long to detect overflow during calculation
5
6        while (x != 0) {
7            int digit = x % 10;
8            x /= 10;
9
10            rev = rev * 10 + digit;
11
12            // Check overflow: must stay within 32-bit signed integer range
13            if (rev > INT_MAX || rev < INT_MIN) {
14                return 0;
15            }
16        }
17
18        return (int)rev;
19    }
20};
21