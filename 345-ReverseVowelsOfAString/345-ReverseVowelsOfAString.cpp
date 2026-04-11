// Last updated: 4/11/2026, 3:57:31 PM
// class Solution {
// public:
// bool isVowel(char c){
//     c = tolower(c);
//     return c=='a' || c=='e' || c=='i' || c=='o' || c=='u' ;
// }
//     string reverseVowels(string s) {
//         int l=0 , r=s.size()-1;
//         while(l<r){
//             while(l<r && !isVowel(s[l])) l++;
//             while(l<r && !isVowel(s[r])) r--;
//             if(l<r){
//                 swap(s[l],s[r]);
//                 l++;
//                 r--;
//             }
//         }
//         return s;
//     }
// };

// brute force 



class Solution {
public:
    bool isVowel(char c) {
        c = tolower(c);
        return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
    }

    string reverseVowels(string s) {
        vector<char> vowels;
        
        for (char c : s) {
            if (isVowel(c)) vowels.push_back(c);
        }
        
        int idx = vowels.size() - 1;
        
        for (int i = 0; i < s.size(); i++) {
            if (isVowel(s[i])) {
                s[i] = vowels[idx--];
            }
        }
        
        return s;
    }
};