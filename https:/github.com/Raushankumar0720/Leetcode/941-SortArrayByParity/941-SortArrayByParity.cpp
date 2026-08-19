// Last updated: 8/19/2026, 10:00:32 PM
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