// Last updated: 4/13/2026, 3:10:41 PM
1class Solution {
2public:
3    int removeDuplicates(vector<int>& nums) {
4        if (nums.empty()) return 0;
5
6        int i=0;
7        for(int j=i+1; j<nums.size(); j++){
8            if(nums[i] != nums[j]){
9                i++;
10                nums[i] = nums[j];
11            }
12        }
13        return i+1;
14    }
15};