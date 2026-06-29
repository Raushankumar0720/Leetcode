// Last updated: 6/29/2026, 10:54:28 PM
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