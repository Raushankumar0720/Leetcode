// Last updated: 9/8/2026, 9:52:36 AM
// class Solution {
// public:
//     string toLowerCase(string s) {
//         for(auto & ch : s){
//             ch = tolower(ch);
//         }
//         return s;
//     }
// };


////////////////////////////////////////////


class Solution {
public:
    string toLowerCase(string s) {
        for(char & ch : s){
            if(ch >= 'A' &&  ch<= 'Z'){
                ch += 32;
            }
        }
        return s;
    }
};