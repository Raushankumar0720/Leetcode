// Last updated: 9/8/2026, 9:49:48 AM
class Solution {
public:
    int minOperations(vector<int>& nums) {
        int count = 0;

        for (int i = 1; i < nums.size(); i++) {

            if (nums[i] <= nums[i - 1]) {
                int required = nums[i - 1] + 1;

                count += required - nums[i];

                nums[i] = required;
            }
        }

        return count;
    }
};