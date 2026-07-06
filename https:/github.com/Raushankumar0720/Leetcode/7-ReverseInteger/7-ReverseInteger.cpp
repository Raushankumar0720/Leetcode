// Last updated: 7/6/2026, 11:44:13 PM
class Solution {
public:
    int reverse(int x) {
        long long rev = 0;  // Use long long to detect overflow during calculation

        while (x != 0) {
            int digit = x % 10;
            x /= 10;

            rev = rev * 10 + digit;

            // Check overflow: must stay within 32-bit signed integer range
            if (rev > INT_MAX || rev < INT_MIN) {
                return 0;
            }
        }

        return (int)rev;
    }
};
