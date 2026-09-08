// Last updated: 9/8/2026, 9:52:33 AM
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
