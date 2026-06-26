// Last updated: 6/26/2026, 10:29:21 PM
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