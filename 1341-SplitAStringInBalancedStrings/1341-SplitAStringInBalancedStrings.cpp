// Last updated: 6/26/2026, 10:29:03 PM
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