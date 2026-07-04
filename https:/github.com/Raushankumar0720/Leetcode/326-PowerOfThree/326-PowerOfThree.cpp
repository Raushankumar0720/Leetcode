// Last updated: 7/4/2026, 11:29:01 PM
class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n <= 0) return false;
        
        while (n % 3 == 0) {
            n /= 3;
        }
        
        return n == 1;
    }
};