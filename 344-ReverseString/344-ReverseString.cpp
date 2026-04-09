// Last updated: 4/9/2026, 9:35:39 AM
1// class Solution {
2// public:
3//     void reverseString(vector<char>& s) {
4//         int l=0 , r=s.size()-1;
5//         while(l<r){
6//             swap(s[l],s[r]);
7//             l++;
8//             r--;
9//         }
10//     }
11// };
12
13
14// using stl ;;;
15
16class Solution {
17public:
18    void reverseString(vector<char>& s) {
19       reverse(s.begin(),s.end());
20    }
21};