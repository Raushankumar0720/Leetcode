// Last updated: 5/27/2026, 10:37:26 AM
1class Solution {
2public:
3    vector<int> sortedSquares(vector<int>& nums) {
4        int n = nums.size();
5        vector<int> result(n);
6        int left = 0, right = n - 1;
7        int pos = n - 1;
8        
9        while(left <= right) {
10            if(abs(nums[left]) > abs(nums[right])) {
11                result[pos--] = nums[left] * nums[left];
12                left++;
13            } else {
14                result[pos--] = nums[right] * nums[right];
15                right--;
16            }
17        }
18        return result;
19    }
20};
21