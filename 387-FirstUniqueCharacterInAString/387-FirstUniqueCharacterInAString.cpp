// Last updated: 6/26/2026, 10:29:33 PM
class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> occ ;
        for(char ch : s){
            occ[ch]++;
        }

        for(int i=0; i<s.size(); i++){
            if(occ[s[i]] == 1) return i;
        }
        return -1;
    }
};