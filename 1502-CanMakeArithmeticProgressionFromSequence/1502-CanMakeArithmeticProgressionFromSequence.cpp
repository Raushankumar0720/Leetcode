// Last updated: 6/13/2026, 11:54:20 AM
1class Solution {
2public:
3    bool canMakeArithmeticProgression(vector<int>& arr) {
4
5        sort(arr.begin(),arr.end());
6        int diff = arr[1] - arr[0];
7        for(int i=2 ; i<arr.size(); i++){
8            if(arr[i]-arr[i-1] != diff ){
9                return false;
10            }
11        }
12        return true;
13    }
14};