// Last updated: 9/8/2026, 9:49:02 AM
class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum = 0;
        int temp = x;
        
        // Extract digits
        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }
        
        // Check Harshad condition
        if (x % sum == 0) return sum;
        return -1;
    }
};
