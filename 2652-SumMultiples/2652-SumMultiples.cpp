// Last updated: 4/17/2026, 11:20:33 PM
1class Solution {
2public:
3    int sumOfMultiples(int n) {
4        int ans = 0;
5        for(int i=1; i<=n; i++){
6            if(i%3 == 0 || i%5==0 || i%7==0){
7                ans +=i;
8            }
9        }
10        return ans;
11    }
12};