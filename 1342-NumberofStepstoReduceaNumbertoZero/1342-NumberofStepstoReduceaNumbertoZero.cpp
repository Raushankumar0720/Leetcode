// Last updated: 4/18/2026, 11:23:38 PM
1class Solution {
2public:
3    int numberOfSteps(int num) {
4        int steps = 0;
5        while(num > 0){
6            if(num%2==0){
7                num/=2;
8            }
9            else{
10                num-=1;
11            }
12            steps++;
13        }
14        return steps;
15    }
16};