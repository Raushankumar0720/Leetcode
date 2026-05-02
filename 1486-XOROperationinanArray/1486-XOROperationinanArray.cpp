// Last updated: 5/2/2026, 11:05:15 PM
1class Solution {
2public:
3    int xorOperation(int n, int start) {
4        int xorResult = 0;
5        for(int i = 0; i < n; i++) {
6            int val = start + 2 * i; 
7            xorResult ^= val;       
8        }
9        return xorResult;
10    }
11};