// Last updated: 7/4/2026, 11:29:05 PM
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        
        for (int i = 0; i < n; i++) {
            if (nums[i] != i) return i;
        }
        return n; 
    }
};
