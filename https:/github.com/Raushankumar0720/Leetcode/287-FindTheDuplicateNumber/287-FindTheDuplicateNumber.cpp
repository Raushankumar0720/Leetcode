// Last updated: 7/4/2026, 11:29:03 PM
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        for(int i=1; i<nums.size();i++){
            if(nums[i] == nums[i-1]) return nums[i];
        }
        return {};
    }
};