// Last updated: 7/4/2026, 11:28:35 PM
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