// Last updated: 4/30/2026, 1:44:43 PM
1class Solution {
2public:
3    bool checkIfPangram(string sentence) {
4        vector<bool> seen(26,false);
5        for(char ch:sentence){
6            seen[ch - 'a'] = true;
7        }
8        for(bool flag : seen){
9            if(!flag) return false;
10        }
11        return true;
12    }
13};