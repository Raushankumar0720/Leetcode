// Last updated: 7/4/2026, 11:29:23 PM
class Solution {
public:
    string convertToTitle(int n) {
        string res="";
        while(n){
            n--; 
            res.push_back('A' + (n % 26));
            n /= 26;
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
