// Last updated: 7/15/2026, 10:17:20 PM
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum = 0;
        for (int i = 0; i < k; i++) sum += nums[i];
        
        int maxSum = sum;
        for (int i = k; i < nums.size(); i++) {
            sum += nums[i] - nums[i - k];         // slide window
            maxSum = max(maxSum, sum);
        }
        return (double)maxSum / k;
    }
};
