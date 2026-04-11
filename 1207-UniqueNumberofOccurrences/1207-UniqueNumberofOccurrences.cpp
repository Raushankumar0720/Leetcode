// Last updated: 4/11/2026, 3:35:31 PM
1class Solution {
2public:
3    bool uniqueOccurrences(vector<int>& arr) {
4        unordered_map<int,int> count;
5        for (int num : arr) count[num]++;
6
7        vector<int> freq;
8        for (auto &p : count) freq.push_back(p.second);
9
10        sort(freq.begin(), freq.end());
11        for (int i = 1; i < freq.size(); i++) {
12            if (freq[i] == freq[i-1]) return false;
13        }
14        return true;
15    }
16};
17