// Last updated: 7/4/2026, 11:29:00 PM
// class Solution {
// public:
//     void reverseString(vector<char>& s) {
//         int l=0 , r=s.size()-1;
//         while(l<r){
//             swap(s[l],s[r]);
//             l++;
//             r--;
//         }
//     }
// };


// using stl ;;;

class Solution {
public:
    void reverseString(vector<char>& s) {
       reverse(s.begin(),s.end());
    }
};