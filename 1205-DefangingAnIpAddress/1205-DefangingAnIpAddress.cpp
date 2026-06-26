// Last updated: 6/26/2026, 10:29:06 PM
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
