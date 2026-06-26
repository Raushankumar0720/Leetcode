// Last updated: 6/26/2026, 10:29:19 PM
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
