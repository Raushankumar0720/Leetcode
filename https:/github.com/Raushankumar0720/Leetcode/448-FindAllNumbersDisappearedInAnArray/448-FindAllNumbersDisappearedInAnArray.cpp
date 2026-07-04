// Last updated: 7/4/2026, 11:28:44 PM
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        
        // Mark seen numbers
        for(int i = 0; i < n; i++) {
            int index = abs(nums[i]) - 1;
            if(nums[index] > 0) {
                nums[index] = -nums[index];
            }
        }
        
        // Collect missing numbers
        vector<int> result;
        for(int i = 0; i < n; i++) {
            if(nums[i] > 0) {
                result.push_back(i + 1);
            }
        }
        
        return result;
    }
};
