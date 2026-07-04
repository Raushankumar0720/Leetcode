// Last updated: 7/4/2026, 11:28:51 PM
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