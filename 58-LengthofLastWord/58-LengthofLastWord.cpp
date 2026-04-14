// Last updated: 4/14/2026, 3:57:09 PM
1class Solution {
2public:
3   int lengthOfLastWord(string s) {
4    int n = s.size();
5    int i = n-1;
6
7    while (i>=0 && s[i] == ' '){
8        i--;
9    }
10
11    int length =0 ;
12    while(i>=0 && s[i] != ' '){
13        length++;
14        i--;
15    }
16    return length;
17   }
18
19};