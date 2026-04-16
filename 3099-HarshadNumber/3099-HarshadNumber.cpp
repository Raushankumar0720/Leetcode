// Last updated: 4/16/2026, 10:56:06 PM
1class Solution {
2public:
3    int sumOfTheDigitsOfHarshadNumber(int x) {
4        int sum = 0;
5        int temp = x;
6        
7        // Extract digits
8        while (temp > 0) {
9            sum += temp % 10;
10            temp /= 10;
11        }
12        
13        // Check Harshad condition
14        if (x % sum == 0) return sum;
15        return -1;
16    }
17};
18