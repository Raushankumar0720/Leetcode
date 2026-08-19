// Last updated: 8/19/2026, 10:32:44 PM
class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size();

        int oddIndex = 1;
        for (int evenIndex = 0; evenIndex < n; evenIndex += 2) {
            if (nums[evenIndex] % 2 != 0) {

                while (nums[oddIndex] % 2 != 0) {
                    oddIndex += 2;
                }

                swap(nums[evenIndex], nums[oddIndex]);
            }
        }
        return nums;
    }
};