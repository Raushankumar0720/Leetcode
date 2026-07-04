// Last updated: 7/4/2026, 11:27:49 PM
class Solution {
public:
    string processStr(string s) {
        string res = "";

        for (char ch : s) {
            if (ch == '#') {
                res += res;
            } else if (ch == '%') {
                reverse(res.begin(), res.end());
            } else if (ch == '*') {
                if (!res.empty()) {
                    res.pop_back();
                }
            } else {
                res += ch;
            }
        }
        return res;
    }
};