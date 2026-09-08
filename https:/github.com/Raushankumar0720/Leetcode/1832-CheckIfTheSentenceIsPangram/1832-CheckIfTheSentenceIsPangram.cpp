// Last updated: 9/8/2026, 9:49:46 AM
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