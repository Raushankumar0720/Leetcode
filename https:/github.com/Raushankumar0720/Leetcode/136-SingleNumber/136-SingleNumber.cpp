// Last updated: 7/4/2026, 11:29:30 PM
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res = 0;
        for (int num : nums) {
            res ^= num;           // XOR each element
        }
        return res;
    }
};
