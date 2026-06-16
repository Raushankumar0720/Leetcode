// Last updated: 6/16/2026, 11:03:51 PM
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int ans = 0;
        for(string &s : sentences){
            ans = max(ans, (int)count(s.begin(), s.end(), ' ') + 1);
        }
        return ans;
    }
};
