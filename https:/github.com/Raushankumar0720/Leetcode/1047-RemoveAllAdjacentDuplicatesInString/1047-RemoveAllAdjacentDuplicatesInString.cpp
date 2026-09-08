// Last updated: 9/8/2026, 9:51:31 AM
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
