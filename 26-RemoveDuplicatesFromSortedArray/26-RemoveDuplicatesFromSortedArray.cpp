// Last updated: 3/14/2026, 10:08:03 PM
// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//         if (nums.empty()) return 0;

//         int k = 1; // pointer for next unique position

//         for (int i = 1; i < nums.size(); i++) {
//             if (nums[i] != nums[i - 1]) {
//                 nums[k] = nums[i];
//                 k++;
//             }
//         }

//         return k;
//     }
// };

// brute force using STL

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s(nums.begin(), nums.end()); // unique elements automatically
        int k = s.size();

        // copy back into nums
        int i = 0;
        for (int val : s) {
            nums[i++] = val;
        }

        return k;
    }
};

