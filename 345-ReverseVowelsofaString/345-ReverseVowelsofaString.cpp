// Last updated: 4/9/2026, 9:55:22 AM
1// class Solution {
2// public:
3// bool isVowel(char c){
4//     c = tolower(c);
5//     return c=='a' || c=='e' || c=='i' || c=='o' || c=='u' ;
6// }
7//     string reverseVowels(string s) {
8//         int l=0 , r=s.size()-1;
9//         while(l<r){
10//             while(l<r && !isVowel(s[l])) l++;
11//             while(l<r && !isVowel(s[r])) r--;
12//             if(l<r){
13//                 swap(s[l],s[r]);
14//                 l++;
15//                 r--;
16//             }
17//         }
18//         return s;
19//     }
20// };
21
22// brute force 
23
24
25
26class Solution {
27public:
28    bool isVowel(char c) {
29        c = tolower(c);
30        return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
31    }
32
33    string reverseVowels(string s) {
34        vector<char> vowels;
35        
36        // Step 1: Collect vowels
37        for (char c : s) {
38            if (isVowel(c)) vowels.push_back(c);
39        }
40        
41        // Step 2: Reverse the collected vowels
42        int idx = vowels.size() - 1;
43        
44        // Step 3: Replace vowels in original string
45        for (int i = 0; i < s.size(); i++) {
46            if (isVowel(s[i])) {
47                s[i] = vowels[idx--];
48            }
49        }
50        
51        return s;
52    }
53};