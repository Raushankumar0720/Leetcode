// Last updated: 5/27/2026, 10:49:53 AM
1class Solution {
2public:
3    int searchInsert(vector<int>& nums, int target) {
4        int left = 0, right = nums.size() - 1;
5        
6        while(left <= right) {
7            int mid = left + (right - left) / 2;
8            if(nums[mid] == target) return mid;
9            else if(nums[mid] < target) left = mid + 1;
10            else right = mid - 1;
11        }
12        
13        return left; // insertion point
14    }
15};
16