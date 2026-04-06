// Last updated: 4/6/2026, 12:12:50 PM
1class Solution {
2public:
3    vector<vector<string>> groupAnagrams(vector<string>& strs) {
4    unordered_map<string, vector<string>> mp; // key: sorted string, value: list of words
5
6    for (auto &s : strs) {
7        string key = s;                // copy original string
8        sort(key.begin(), key.end());  // sort → canonical form
9        mp[key].push_back(s);          // group by sorted key
10    }
11
12    vector<vector<string>> res;
13    for (auto &p : mp) {
14        res.push_back(p.second);       // collect all grouped values
15    }
16    return res;
17}
18
19};