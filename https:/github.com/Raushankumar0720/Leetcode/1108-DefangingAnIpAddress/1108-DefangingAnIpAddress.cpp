// Last updated: 9/8/2026, 9:51:25 AM
class Solution {
public:
    string defangIPaddr(string address) {
        string result;
        for (char c : address) {
            if (c == '.') {
                result += "[.]";
            } else {
                result += c;
            }
        }
        return result;
    }
};
