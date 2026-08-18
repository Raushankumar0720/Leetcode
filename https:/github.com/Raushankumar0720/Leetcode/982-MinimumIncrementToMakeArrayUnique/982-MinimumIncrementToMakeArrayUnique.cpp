// Last updated: 8/18/2026, 1:46:09 PM
class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        int count = 0;

        for(int i=1; i<nums.size(); i++){
            if(nums[i] <= nums[i-1]){
                nums[i] + 1 ;
                int old = nums[i];
                nums[i] = nums[i-1] + 1 ;
                count += nums[i] - old ;
            }
        }
        return count;
    }
};