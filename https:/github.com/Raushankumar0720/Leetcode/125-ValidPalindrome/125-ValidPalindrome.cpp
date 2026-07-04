// Last updated: 7/4/2026, 11:29:31 PM
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string input) {
        string filteredText = "";
        
        for (char ch : input) {
            if ((ch >= 'a' && ch <= 'z') || 
                (ch >= 'A' && ch <= 'Z') || 
                (ch >= '0' && ch <= '9')) 

            {
                // if(isalnum(ch)){} => check alpha-numeric char 

                filteredText += tolower(ch);
            }
        }

        string reversedText = filteredText;
        reverse(reversedText.begin(), reversedText.end());

        return filteredText == reversedText;
    }
};
