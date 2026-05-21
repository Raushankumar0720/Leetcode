// Last updated: 5/21/2026, 2:09:15 PM
1class Solution {
2public:
3    vector<int> runningSum(vector<int>& nums) {
4        vector <int> res;
5        int sum =0;
6        for(int i=0 ; i<nums.size() ; i++){
7            sum += nums[i];
8            res.push_back(sum);
9        }
10        return res;
11    }
12};