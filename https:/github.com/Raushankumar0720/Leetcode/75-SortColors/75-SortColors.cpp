// Last updated: 7/5/2026, 11:47:20 PM
// Brute force

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0, mid = 0, high = nums.size() - 1;
        
        while (mid <= high) {
            if (nums[mid] == 0) {
                swap(nums[low], nums[mid]);
                low++; mid++;
            } else if (nums[mid] == 1) {
                mid++;
            } else { // nums[mid] == 2
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};

// Using stl

// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//     }
// };