// Last updated: 4/15/2026, 11:19:36 AM
1class Solution {
2public:
3    int firstUniqChar(string s) {
4        unordered_map<char,int> occ ;
5        for(char ch : s){
6            occ[ch]++;
7        }
8
9        for(int i=0; i<s.size(); i++){
10            if(occ[s[i]] == 1) return i;
11        }
12        return -1;
13    }
14};