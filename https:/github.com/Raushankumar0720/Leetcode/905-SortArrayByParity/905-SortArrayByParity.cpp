// Last updated: 9/8/2026, 9:51:58 AM
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {

        vector<int> even;
        vector<int> odd;

        for (int num : nums) {
            if (num % 2 == 0) {
                even.push_back(num);
            } else {
                odd.push_back(num);
            }
        }

        for (int num : odd) {
            even.push_back(num);
        }

        return even;
    }
};