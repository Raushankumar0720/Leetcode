// Last updated: 7/4/2026, 11:28:34 PM
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> jewelSet(jewels.begin(), jewels.end());
        int count = 0;
        for(char c : stones) {
            if(jewelSet.count(c)) {
                count++;
            }
        }
        return count;
    }
};
