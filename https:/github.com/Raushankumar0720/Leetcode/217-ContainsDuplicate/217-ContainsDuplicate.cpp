// Last updated: 7/4/2026, 11:29:15 PM

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end()); // O(n log n)
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) {
                return true; // Duplicate found
            }
        }
        return false; // No duplicates
    }
};
