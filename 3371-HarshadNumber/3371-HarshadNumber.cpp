// Last updated: 6/26/2026, 10:28:31 PM
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
