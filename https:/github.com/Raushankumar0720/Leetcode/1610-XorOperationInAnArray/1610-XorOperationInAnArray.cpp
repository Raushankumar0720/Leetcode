// Last updated: 7/4/2026, 11:28:07 PM
class Solution {
public:
    int xorOperation(int n, int start) {
        int xorResult = 0;
        for(int i = 0; i < n; i++) {
            int val = start + 2 * i; 
            xorResult ^= val;       
        }
        return xorResult;
    }
};