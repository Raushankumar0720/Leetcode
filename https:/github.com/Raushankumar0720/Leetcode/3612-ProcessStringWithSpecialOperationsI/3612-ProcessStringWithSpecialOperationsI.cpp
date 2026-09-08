// Last updated: 9/8/2026, 9:48:50 AM
class Solution {
public:
    string processStr(string s) {
        
        string res ="";

        for(int i=0; i<s.size(); i++){
            if(s[i]>=97 && s[i]<=122){
                res += s[i];
            }
            else if(s[i] == '*' && !res.empty()){
                res.pop_back();
            }
            else if(s[i] == '#'){              // t.c => form a gp -> isliye t.c approx o(2^n)
                res += res;              
            }
            else{
                reverse(res.begin(),res.end());
            }
        }
        return res;
    }
};