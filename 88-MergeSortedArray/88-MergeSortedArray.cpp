// Last updated: 3/28/2026, 11:43:55 PM
1class Solution {
2public:
3    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
4        int p1 = m - 1;          // pointer for nums1
5        int p2 = n - 1;          // pointer for nums2
6        int p = m + n - 1;       // pointer for placement in nums1
7
8        // Merge from the back
9        while (p1 >= 0 && p2 >= 0) {
10            if (nums1[p1] > nums2[p2]) {
11                nums1[p] = nums1[p1];
12                p1--;
13            } else {
14                nums1[p] = nums2[p2];
15                p2--;
16            }
17            p--;
18        }
19
20        // If nums2 still has elements left
21        while (p2 >= 0) {
22            nums1[p] = nums2[p2];
23            p2--;
24            p--;
25        }
26    }
27};
28