// Last updated: 5/26/2026, 11:49:21 PM
1class Solution {
2public:
3    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
4        vector<int> sorted = nums;
5        sort(sorted.begin(), sorted.end());
6        
7        unordered_map<int,int> mp;
8        for(int i = 0; i < sorted.size(); i++) {
9            if(mp.find(sorted[i]) == mp.end()) {
10                mp[sorted[i]] = i; // first occurrence index = count of smaller numbers
11            }
12        }
13        
14        vector<int> result;
15        for(int num : nums) {
16            result.push_back(mp[num]);
17        }
18        return result;
19    }
20};
21