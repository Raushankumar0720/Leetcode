// Last updated: 3/22/2026, 11:58:22 PM
1class Solution {
2public:
3   int lengthOfLastWord(string s) {
4    int n = s.size();
5    int i = n - 1;
6
7    // Step 1: Skip trailing spaces
8    while (i >= 0 && s[i] == ' ') {
9        i--;
10    }
11
12    // Step 2: Count length of last word
13    int length = 0;
14    while (i >= 0 && s[i] != ' ') {
15        length++;
16        i--;
17    }
18
19    return length;
20   }
21
22};