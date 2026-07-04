// Last updated: 7/4/2026, 11:28:18 PM
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> count;
        unordered_set<int> occurrences;
        for (int num : arr) count[num]++;
        for (auto& [key, freq] : count) {
            if (!occurrences.insert(freq).second) return false;
        }
        return true;
    }
};
