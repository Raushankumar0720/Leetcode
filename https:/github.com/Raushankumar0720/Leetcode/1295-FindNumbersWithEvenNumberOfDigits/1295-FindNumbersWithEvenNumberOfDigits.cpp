// Last updated: 9/8/2026, 9:51:01 AM
class Solution {
public:
    bool even(int i) {
        int count = 0;
        while (i > 0) {
            // int digit = i % 10; 
            count++;
            i = i / 10;
        }
        return count % 2 == 0;
    }
    int findNumbers(vector<int>& nums) {

        int count = 0;

        for (int i : nums) {
            if (even(i)) {
                count++;
            }
        }

        return count;
    }
};