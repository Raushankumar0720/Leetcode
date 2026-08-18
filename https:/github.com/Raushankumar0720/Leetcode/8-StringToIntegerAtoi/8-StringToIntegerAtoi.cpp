// Last updated: 8/18/2026, 2:07:49 PM
class Solution {
public:
    int myAtoi(string s) {
        int n = s.length();

        int i = 0;
        long long res = 0;

       
        while (i < n && s[i] == ' ') {
            i++;
        }

       
        bool positive = true;

        if (i < n && (s[i] == '+' || s[i] == '-')) {
            if (s[i] == '-') {
                positive = false;
            }
            i++;
        }

        
        while (i < n && isdigit(s[i])) {

            int digit = s[i] - '0';

            res = res * 10 + digit;

            
            if (positive && res > INT_MAX) {
                return INT_MAX;
            }

            if (!positive && -res < INT_MIN) {
                return INT_MIN;
            }

            i++;
        }

        
        if (!positive) {
            res = -res;
        }

        return res;
    }
};