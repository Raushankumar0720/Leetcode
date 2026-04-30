// Last updated: 4/30/2026, 9:55:06 AM
1class Solution {
2public:
3    bool isValid(string s) {
4        stack<char> st;
5        for (char c : s) {
6            if (c == '(' || c == '{' || c == '[') {
7                st.push(c);
8            } else {
9                if (st.empty()) return false;
10                char top = st.top();
11                st.pop();
12                if ((c == ')' && top != '(') ||
13                    (c == '}' && top != '{') ||
14                    (c == ']' && top != '[')) {
15                    return false;
16                }
17            }
18        }
19        return st.empty();
20    }
21};