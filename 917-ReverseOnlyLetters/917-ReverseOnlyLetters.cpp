// Last updated: 4/9/2026, 10:41:37 AM
1class Solution {
2public:
3bool isLetter(char c){
4    c = tolower(c);
5    return c=='a'|| c=='b' || c=='c' || c=='d' || c=='e' || c=='f' || c=='g' || c=='h' || c=='i' || c=='j' || c=='k' || c=='l' || c=='m' || c=='n' || c=='o' || c=='p' || c=='q' || c=='r' || c=='s' || c=='t' || c=='u' || c=='v' || c=='w' || c=='x' || c=='y' || c=='z' ;
6}
7    string reverseOnlyLetters(string s) {
8        int l=0 , r=s.size()-1;
9        
10        while(l<r){
11            while(l<r && !isLetter(s[l])) l++;
12            while(l<r && !isLetter(s[r])) r--;
13            if(l<r){
14                swap(s[l],s[r]);
15                l++;
16                r--;
17            }
18        }
19        return s;
20    }
21};