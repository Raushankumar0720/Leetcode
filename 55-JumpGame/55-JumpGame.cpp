// Last updated: 6/5/2026, 5:27:27 PM
1class Solution {
2public:
3    bool canJump(vector<int>& nums) {
4        int maxReach = 0;
5        for (int i = 0; i < nums.size(); i++) {
6            if (i > maxReach) return false;
7            maxReach = max(maxReach, i + nums[i]);
8        }
9        return true;
10    }
11};
12