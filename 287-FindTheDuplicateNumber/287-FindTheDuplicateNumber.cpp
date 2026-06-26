// Last updated: 6/26/2026, 10:29:40 PM
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