// Last updated: 7/4/2026, 11:28:48 PM
class Solution {
public:
    string decodeString(string s) {
        stack<int> numStack;    // To store the multipliers (k)
        stack<string> strStack; // To store the strings built so far

        int currentNum = 0;     // k for the current bracket
        string currentStr = ""; // The string inside the current bracket

        // Iterate through every character in the string
        for (char c : s) {

            // RULE 1: If it's a number, build the currentNum
            if (isdigit(c)) {
                // We subtract '0' to convert the char to an actual integer
                currentNum = currentNum * 10 + (c - '0');
            }

            // RULE 2: If it's an open bracket, SAVE state and RESET
            else if (c == '[') {
                numStack.push(currentNum);
                strStack.push(currentStr);

                // Reset for the new string inside the bracket
                currentNum = 0;
                currentStr = "";
            }

            // RULE 3: If it's a close bracket, RESOLVE and MERGE
            else if (c == ']') {
                // Get the multiplier and the previous string
                int k = numStack.top();
                numStack.pop();

                string prevStr = strStack.top();
                strStack.pop();

                // Multiply the current string k times
                string multipliedString = "";
                for (int i = 0; i < k; ++i) {
                    multipliedString += currentStr;
                }

                // Merge it with the previous string
                currentStr = prevStr + multipliedString;
            }

            // RULE 4: If it's a letter, just add it to the current string
            else {
                currentStr += c;
            }
        }

        // By the end of the loop, all brackets are resolved and
        // currentStr holds the final answer
        return currentStr;
    }
};