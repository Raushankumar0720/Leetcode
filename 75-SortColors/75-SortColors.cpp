// Last updated: 3/14/2026, 12:12:08 AM
1// Brute force
2
3class Solution {
4public:
5    void sortColors(vector<int>& nums) {
6        int low = 0, mid = 0, high = nums.size() - 1;
7        
8        while (mid <= high) {
9            if (nums[mid] == 0) {
10                swap(nums[low], nums[mid]);
11                low++; mid++;
12            } else if (nums[mid] == 1) {
13                mid++;
14            } else { // nums[mid] == 2
15                swap(nums[mid], nums[high]);
16                high--;
17            }
18        }
19    }
20};
21
22// Using stl
23
24// class Solution {
25// public:
26//     void sortColors(vector<int>& nums) {
27//         sort(nums.begin(),nums.end());
28//     }
29// };