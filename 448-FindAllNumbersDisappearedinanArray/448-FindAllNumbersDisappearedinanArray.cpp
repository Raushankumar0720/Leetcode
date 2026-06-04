// Last updated: 6/4/2026, 10:03:41 PM
1class Solution {
2public:
3    vector<int> findDisappearedNumbers(vector<int>& nums) {
4        int n = nums.size();
5        
6        // Mark seen numbers
7        for(int i = 0; i < n; i++) {
8            int index = abs(nums[i]) - 1;
9            if(nums[index] > 0) {
10                nums[index] = -nums[index];
11            }
12        }
13        
14        // Collect missing numbers
15        vector<int> result;
16        for(int i = 0; i < n; i++) {
17            if(nums[i] > 0) {
18                result.push_back(i + 1);
19            }
20        }
21        
22        return result;
23    }
24};
25