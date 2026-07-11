// Last updated: 7/11/2026, 11:52:36 PM
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool inc = true, dec = true;
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] > nums[i-1]) dec = false;   // not decreasing
            if(nums[i] < nums[i-1]) inc = false;   // not increasing
        }
        return inc || dec;
    }
};
