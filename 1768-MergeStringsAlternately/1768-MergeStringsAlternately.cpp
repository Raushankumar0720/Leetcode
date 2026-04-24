// Last updated: 4/24/2026, 10:04:46 AM
1class Solution {
2public:
3    string mergeAlternately(string word1, string word2) {
4        string result = "";
5
6        int i=0 , j=0;
7        while(i<word1.size() || j<word2.size()){
8            if(i<word1.size()){
9                result += word1[i];
10                i++;
11            }
12            if(j<word2.size()){
13                result += word2[j];
14                j++;
15            }
16        }
17        return result;
18    }
19};