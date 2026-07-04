// Last updated: 7/4/2026, 11:27:59 PM
class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<bool> seen(26,false);
        for(char ch:sentence){
            seen[ch - 'a'] = true;
        }
        for(bool flag : seen){
            if(!flag) return false;
        }
        return true;
    }
};