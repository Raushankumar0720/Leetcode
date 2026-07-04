// Last updated: 7/4/2026, 11:28:22 PM
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
