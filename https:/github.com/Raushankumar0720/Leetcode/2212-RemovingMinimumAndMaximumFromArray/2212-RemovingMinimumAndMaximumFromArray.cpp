// Last updated: 8/30/2026, 11:20:09 PM
class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        if (n <= 2) return n;

        int minIdx = 0;
        int maxIdx = 0;

        for (int i = 1; i < n; ++i) {
            if (nums[i] < nums[minIdx]) minIdx = i;
            if (nums[i] > nums[maxIdx]) maxIdx = i;
        }

        int left = min(minIdx, maxIdx);
        int right = max(minIdx, maxIdx);

        int frontOnly = right + 1;

        int backOnly = n - left;

        int bothEnds = (left + 1) + (n - right);

        return min({frontOnly, backOnly, bothEnds});
    }
};