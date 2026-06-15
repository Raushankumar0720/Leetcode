// Last updated: 6/15/2026, 10:47:10 PM
1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4        for(int i=0;i<nums.size();i++){
5            for(int j=i+1;j<nums.size();j++){
6                if(nums[i]+nums[j]==target) return {i,j};
7            }
8        }
9        return {};
10    }
11};
12