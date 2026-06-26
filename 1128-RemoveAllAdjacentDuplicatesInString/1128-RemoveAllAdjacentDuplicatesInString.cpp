// Last updated: 6/26/2026, 10:29:08 PM
class Solution {
public:
    string removeDuplicates(string s) {
        string res;
        for(char ch : s){
            if(!res.empty() && res.back() == ch){
                res.pop_back(); 
            } else {
                res.push_back(ch);
            }
        }
        return res;
    }
};
