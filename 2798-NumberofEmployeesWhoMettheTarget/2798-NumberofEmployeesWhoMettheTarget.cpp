// Last updated: 5/3/2026, 10:02:33 PM
1class Solution {
2public:
3    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
4        int count = 0;
5        for(int h : hours) {
6            if(h >= target) count++;
7        }
8        return count;
9    }
10};