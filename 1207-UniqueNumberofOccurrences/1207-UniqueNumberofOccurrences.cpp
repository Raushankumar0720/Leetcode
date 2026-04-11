// Last updated: 4/11/2026, 3:37:41 PM
1class Solution {
2public:
3    bool uniqueOccurrences(vector<int>& arr) {
4        unordered_map<int, int> count;
5        unordered_set<int> occurrences;
6        for (int num : arr) count[num]++;
7        for (auto& [key, freq] : count) {
8            if (!occurrences.insert(freq).second) return false;
9        }
10        return true;
11    }
12};
13