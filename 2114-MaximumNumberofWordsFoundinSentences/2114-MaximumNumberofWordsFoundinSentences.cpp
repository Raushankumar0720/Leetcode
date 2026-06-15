// Last updated: 6/15/2026, 10:48:15 PM
1class Solution {
2public:
3    int mostWordsFound(vector<string>& sentences) {
4        int ans = 0;
5        for(string &s : sentences){
6            ans = max(ans, (int)count(s.begin(), s.end(), ' ') + 1);
7        }
8        return ans;
9    }
10};
11