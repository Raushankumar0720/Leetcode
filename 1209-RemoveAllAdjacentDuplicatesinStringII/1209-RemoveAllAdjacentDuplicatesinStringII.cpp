// Last updated: 6/6/2026, 11:40:01 AM
1class Solution {
2public:
3    string removeDuplicates(string s, int k) {
4        stack<pair<char, int>> st;
5
6        for (char c : s) {
7            if (!st.empty() && st.top().first == c) {
8                st.top().second++;
9                if (st.top().second == k) {
10                    st.pop(); 
11                }
12            } else {
13                st.push({c, 1});
14            }
15        }
16
17        string result = "";
18        while (!st.empty()) {
19            auto [ch, cnt] = st.top();
20            st.pop();
21            result.append(cnt, ch);
22        }
23        reverse(result.begin(), result.end());
24        return result;
25    }
26};
27