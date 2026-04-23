// Last updated: 4/23/2026, 10:07:22 PM
1class Solution {
2public:
3    int fib(int n) {
4        if (n < 2) return n;
5        int a = 0, b = 1;
6        for (int i = 2; i <= n; i++) {
7            int c = a + b;
8            a = b;
9            b = c;
10        }
11        return b;
12    }
13};
14