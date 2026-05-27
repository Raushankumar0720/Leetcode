// Last updated: 5/27/2026, 10:55:27 AM
1class Solution {
2public:
3    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
4        unordered_map<int,int> freq;
5        vector<int> result;
6        
7        for(int num : nums1) {
8            freq[num]++;
9        }
10        
11        for(int num : nums2) {
12            if(freq[num] > 0) {
13                result.push_back(num);
14                freq[num]--;
15            }
16        }
17        
18        return result;
19    }
20};
21