// Last updated: 4/14/2026, 5:04:40 PM
1class Solution {
2public:
3    int findDuplicate(vector<int>& nums) {
4        sort(nums.begin(),nums.end());
5
6        for(int i=1; i<nums.size();i++){
7            if(nums[i] == nums[i-1]) return nums[i];
8        }
9        return {};
10    }
11};