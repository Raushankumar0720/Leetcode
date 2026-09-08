// Last updated: 9/8/2026, 9:50:37 AM
// class Solution {
// public:
//     int maxProduct(vector<int>& nums) {
//         int n = nums.size();

//         sort(nums.begin(), nums.end());

//         return (nums[n - 1] - 1) * (nums[n - 2] - 1);
//     }
// };


//  M2 ... O(n)

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();

        int max1 = INT_MIN;
        int max2 = INT_MIN;

        for(int x : nums){
            if(x > max1){
                max2 = max1;
                max1 = x;
            }
            else if(x > max2 ){
                max2 = x;
            }
        }
        return (max1-1)*(max2-1);
    }
};