// Last updated: 5/28/2026, 11:54:55 PM
1class Solution {
2public:
3    bool containsNearbyDuplicate(vector<int>& nums, int k) {
4        unordered_map<int,int> mp; // value -> last index
5        for(int i = 0; i < nums.size(); i++) {
6            if(mp.count(nums[i]) && i - mp[nums[i]] <= k) {
7                return true;
8            }
9            mp[nums[i]] = i; // update last index
10        }
11        return false;
12    }
13};
14