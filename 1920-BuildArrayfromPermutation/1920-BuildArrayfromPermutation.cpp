// Last updated: 5/21/2026, 2:02:22 PM
1class Solution {
2public:
3    vector<int> buildArray(vector<int>& nums) {
4        vector <int> ans;
5
6        for( int i=0; i< nums.size() ; i++){
7            ans.push_back(nums[nums[i]]);
8        }
9        return ans;
10    }
11};