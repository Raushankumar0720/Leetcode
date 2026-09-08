// Last updated: 9/8/2026, 9:50:28 AM
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