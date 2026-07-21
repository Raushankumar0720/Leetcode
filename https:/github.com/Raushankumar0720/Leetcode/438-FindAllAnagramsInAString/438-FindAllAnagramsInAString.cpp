// Last updated: 7/21/2026, 4:31:24 PM
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> res;
        int n = s.size(), m = p.size();
        if(m > n) return res;
        
        vector<int> freqP(26,0), freqS(26,0);
        
        
        for(char c : p) freqP[c - 'a']++;
        
        
        for(int i=0; i<m; i++) freqS[s[i] - 'a']++;
        
        if(freqS == freqP) res.push_back(0);
        
      
        for(int i=m; i<n; i++) {
            freqS[s[i] - 'a']++;           
            freqS[s[i-m] - 'a']--;         
            if(freqS == freqP) res.push_back(i-m+1);
        }
        
        return res;
    }
};
