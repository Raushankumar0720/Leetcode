// Last updated: 4/11/2026, 3:57:27 PM
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
