// Last updated: 8/24/2026, 4:57:16 PM
class Solution {
public:
    char findTheDifference(string s, string t) {
        char res = 0;

        for(char ch : s){
            res ^= ch;
        }

        for(char ch : t){
            res ^= ch;
        }
        return res;
    }
};