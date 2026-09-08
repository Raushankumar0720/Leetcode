// Last updated: 9/8/2026, 9:50:25 AM
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