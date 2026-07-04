// Last updated: 7/4/2026, 11:28:15 PM
class Solution {
public:
    int balancedStringSplit(string s) {
        int l=0,r=0,cnt=0;

        for(auto& c:s){
            if(c=='L')l++;
            else r++;
            if(l==r)cnt++;
        }
        return cnt;
    }
};