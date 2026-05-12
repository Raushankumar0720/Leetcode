// Last updated: 5/12/2026, 2:21:58 PM
1class Solution {
2public:
3    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
4        unordered_set<int> st(nums1.begin(),nums1.end());
5        unordered_set<int> ans;
6
7        for(int num : nums2){
8            if(st.count(num)) ans.insert(num);
9        }
10        return vector<int> (ans.begin(),ans.end());
11    }
12};