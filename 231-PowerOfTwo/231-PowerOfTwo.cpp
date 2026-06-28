// Last updated: 6/28/2026, 11:45:42 PM
class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n>0 && (n & (n-1)) == 0;
    }
};