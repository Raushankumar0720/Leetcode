// Last updated: 6/26/2026, 10:28:33 PM
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