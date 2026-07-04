// Last updated: 7/4/2026, 11:29:28 PM
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long long> st;

        for(string nuc : tokens){
            if(nuc == "+" || nuc == "-" || nuc == "*" || nuc == "/"){
                long long b = st.top() ; st.pop();
                long long a = st.top() ; st.pop();

                if(nuc == "+") st.push(a+b);
                else if(nuc == "-") st.push(a-b);
                else if(nuc == "*") st.push(a*b);
                else if(nuc == "/") st.push(a/b);
            }
            else{
                    st.push(stoll(nuc));
                }
        }
        return st.top();
    }
};