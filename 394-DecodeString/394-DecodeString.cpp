// Last updated: 6/4/2026, 11:05:10 AM
1class Solution {
2public:
3    string decodeString(string s) {
4        stack<int> numStack;    // To store the multipliers (k)
5        stack<string> strStack; // To store the strings built so far
6
7        int currentNum = 0;     // k for the current bracket
8        string currentStr = ""; // The string inside the current bracket
9
10        // Iterate through every character in the string
11        for (char c : s) {
12
13            // RULE 1: If it's a number, build the currentNum
14            if (isdigit(c)) {
15                // We subtract '0' to convert the char to an actual integer
16                currentNum = currentNum * 10 + (c - '0');
17            }
18
19            // RULE 2: If it's an open bracket, SAVE state and RESET
20            else if (c == '[') {
21                numStack.push(currentNum);
22                strStack.push(currentStr);
23
24                // Reset for the new string inside the bracket
25                currentNum = 0;
26                currentStr = "";
27            }
28
29            // RULE 3: If it's a close bracket, RESOLVE and MERGE
30            else if (c == ']') {
31                // Get the multiplier and the previous string
32                int k = numStack.top();
33                numStack.pop();
34
35                string prevStr = strStack.top();
36                strStack.pop();
37
38                // Multiply the current string k times
39                string multipliedString = "";
40                for (int i = 0; i < k; ++i) {
41                    multipliedString += currentStr;
42                }
43
44                // Merge it with the previous string
45                currentStr = prevStr + multipliedString;
46            }
47
48            // RULE 4: If it's a letter, just add it to the current string
49            else {
50                currentStr += c;
51            }
52        }
53
54        // By the end of the loop, all brackets are resolved and
55        // currentStr holds the final answer
56        return currentStr;
57    }
58};