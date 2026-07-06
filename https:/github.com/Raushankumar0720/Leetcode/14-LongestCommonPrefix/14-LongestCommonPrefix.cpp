// Last updated: 7/6/2026, 11:44:07 PM
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty())
            return "";

        string Prefix = strs[0];

        for (int i = 1; i < strs.size(); i++) {
            while (strs[i].find(Prefix) != 0) {
                Prefix.pop_back();
                if (Prefix.empty())
                    return "";
            }
        }
        return Prefix;
    }
};