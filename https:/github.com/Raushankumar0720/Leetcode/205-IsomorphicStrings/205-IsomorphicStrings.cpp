// Last updated: 7/21/2026, 10:33:22 PM
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int s_len = s.length();
        int t_len = t.length();

        if(s_len != t_len) return false;
        if(t.empty() || s.empty()) return false;

        for(int i=0;i<t_len;i++){
            for(int j=i+1;j<t_len;j++){
                if(s[i]==s[j] && t[i]!=t[j]) return false;
                else if(s[i]!=s[j] && t[i]==t[j]) return false;
            }
        }
        return true;
    }
};