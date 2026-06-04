// Last updated: 6/4/2026, 10:48:11 PM
1class Solution {
2public:
3    int findMaxConsecutiveOnes(vector<int>& nums) {
4
5        int count = 0;
6            int maxi = 0 ;
7        for(int num : nums){
8            
9
10            if(num == 1){
11                count++;
12                maxi = max(maxi,count);
13            }
14            if(num == 0){
15                count = 0;
16            }
17        }
18        return maxi;
19    }
20};