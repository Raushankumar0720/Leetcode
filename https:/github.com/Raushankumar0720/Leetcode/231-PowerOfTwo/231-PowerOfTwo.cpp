// Last updated: 7/4/2026, 11:29:13 PM
class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n>0 && (n & (n-1)) == 0;
    }
};