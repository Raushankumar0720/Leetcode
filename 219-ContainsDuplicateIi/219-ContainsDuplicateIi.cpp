// Last updated: 6/26/2026, 10:29:49 PM
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> mp; // value -> last index
        for(int i = 0; i < nums.size(); i++) {
            if(mp.count(nums[i]) && i - mp[nums[i]] <= k) {
                return true;
            }
            mp[nums[i]] = i; // update last index
        }
        return false;
    }
};
