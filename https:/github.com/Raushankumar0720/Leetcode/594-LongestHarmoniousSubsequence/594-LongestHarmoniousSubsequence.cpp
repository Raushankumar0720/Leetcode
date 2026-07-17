// Last updated: 7/17/2026, 4:23:16 PM
class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int, int> freq;

        // Count frequency of each number
        for (int num : nums)
            freq[num]++;

        int ans = 0;

        // Check every number with its consecutive number
        for (auto &it : freq) {
            if (freq.count(it.first + 1)) {
                ans = max(ans, it.second + freq[it.first + 1]);
            }
        }

        return ans;
    }
};