// Last updated: 7/21/2026, 4:30:55 PM
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxVowels(string s, int k) {
        auto isVowel = [](char c) {
            return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
        };
        
        int n = s.size();
        int count = 0, maxCount = 0;
        
        for(int i=0; i<k && i<n; i++) {
            if(isVowel(s[i])) count++;
        }
        maxCount = count;
        
        for(int i=k; i<n; i++) {
            if(isVowel(s[i])) count++;
            if(isVowel(s[i-k])) count--;
            maxCount = max(maxCount, count);
        }
        
        return maxCount;
    }
};
