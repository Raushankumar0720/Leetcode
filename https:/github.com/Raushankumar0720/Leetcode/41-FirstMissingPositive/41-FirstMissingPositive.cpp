// Last updated: 7/5/2026, 11:47:31 PM
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        
        // Rearrangement phase
        for (int i = 0; i < n; i++) {
            while (nums[i] > 0 && nums[i] <= n && nums[i] != nums[nums[i] - 1]) {
                swap(nums[i], nums[nums[i] - 1]);
            }
        }
        
        // Scanning phase
        for (int i = 0; i < n; i++) {
            if (nums[i] != i + 1) return i + 1;
        }
        
        return n + 1;
    }
};
