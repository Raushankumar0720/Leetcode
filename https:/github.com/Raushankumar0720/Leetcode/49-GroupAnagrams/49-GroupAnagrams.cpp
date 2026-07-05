// Last updated: 7/5/2026, 11:47:30 PM
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> mp; // key: sorted string, value: list of words

    for (auto &s : strs) {
        string key = s;                // copy original string
        sort(key.begin(), key.end());  // sort → canonical form
        mp[key].push_back(s);          // group by sorted key
    }

    vector<vector<string>> res;
    for (auto &p : mp) {
        res.push_back(p.second);       // collect all grouped values
    }
    return res;
}

};