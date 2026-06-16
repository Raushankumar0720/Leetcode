// Last updated: 6/16/2026, 11:03:52 PM
class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int x : nums) freq[x]++;

        int rows = 0;
        for(auto &p : freq) rows = max(rows, p.second);

        vector<vector<int>> ans(rows);
        for(auto &p : freq) {
            int val = p.first, count = p.second;
            for(int i = 0; i < count; i++) {
                ans[i].push_back(val);
            }
        }
        return ans;
    }
};
