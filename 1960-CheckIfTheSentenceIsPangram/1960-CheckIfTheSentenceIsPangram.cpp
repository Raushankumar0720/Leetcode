// Last updated: 6/26/2026, 10:28:46 PM
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