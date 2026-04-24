// Last updated: 4/24/2026, 9:32:23 AM
1#include <bits/stdc++.h>
2using namespace std;
3
4class Solution {
5public:
6    bool isPalindrome(string input) {
7        string filteredText = "";
8        
9        for (char ch : input) {
10            if ((ch >= 'a' && ch <= 'z') || 
11                (ch >= 'A' && ch <= 'Z') || 
12                (ch >= '0' && ch <= '9')) 
13
14            {
15                // if(isalnum(ch)){} => check alpha-numeric char 
16
17                filteredText += tolower(ch);
18            }
19        }
20
21        string reversedText = filteredText;
22        reverse(reversedText.begin(), reversedText.end());
23
24        return filteredText == reversedText;
25    }
26};
27