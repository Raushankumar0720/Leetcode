// Last updated: 7/4/2026, 11:28:05 PM
class Solution {
public:
   int numIdenticalPairs(vector<int>& nums) {
    unordered_map<int,int> freq;
    int count = 0;
    for(int num : nums) {
        count += freq[num];   // each previous occurrence forms a pair
        freq[num]++;          // update frequency
    }
    return count;
}

};