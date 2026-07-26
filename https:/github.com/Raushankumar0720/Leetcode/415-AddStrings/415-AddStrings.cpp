// Last updated: 7/26/2026, 11:26:33 PM
class Solution {
public:
    string addStrings(string num1, string num2) {
        // Start pointers from the last digit of both strings
        int i = num1.length() - 1;
        int j = num2.length() - 1;

        int carry = 0;          // Carry for addition
        string result = "";     // Result string to store digits

        // Loop until both strings are processed OR carry remains
        while(i >= 0 || j >= 0 || carry > 0) {
            // Get digit from num1 if available, else 0
            int digit1 = (i >= 0 ? num1[i] - '0' : 0);
            // Get digit from num2 if available, else 0
            int digit2 = (j >= 0 ? num2[j] - '0' : 0);

            // Add digits + carry
            int sum = digit1 + digit2 + carry;
            carry = sum / 10;   // Update carry for next step

            // Current digit = sum % 10, convert to char and append krenge
            result.push_back((sum % 10) + '0');

            // pointers leftwards move krenge
            i--;
            j--; 
        }

        // ab reverse kr denge
        reverse(result.begin(), result.end());
        return result;
    }
};
