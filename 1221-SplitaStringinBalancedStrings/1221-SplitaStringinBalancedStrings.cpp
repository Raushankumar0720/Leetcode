// Last updated: 6/17/2026, 11:18:36 AM
1class Solution {
2public:
3    int balancedStringSplit(string s) {
4        int countL = 0 , countR = 0 , res = 0;
5
6        for(char ch : s){
7            if(ch == 'L') countL++;
8            else countR++;
9            
10            if(countL == countR){
11                res++;
12                countL = countR = 0;
13            }
14        }
15        return res;
16    }
17};