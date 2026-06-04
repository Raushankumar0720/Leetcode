// Last updated: 6/4/2026, 11:51:43 AM
1class Solution {
2public:
3    int evalRPN(vector<string>& tokens) {
4        stack<int> st;
5
6        for(string nuc : tokens){
7            if(nuc == "+" || nuc == "-" || nuc == "*" || nuc == "/"){
8                int b = st.top() ; st.pop();
9                int a = st.top() ; st.pop();
10
11                if(nuc == "+") st.push(a+b);
12                else if(nuc == "-") st.push(a-b);
13                else if(nuc == "*") st.push(a*b);
14                else if(nuc == "/") st.push(a/b);
15            }
16            else{
17                    st.push(stoll(nuc));
18                }
19        }
20        return st.top();
21    }
22};