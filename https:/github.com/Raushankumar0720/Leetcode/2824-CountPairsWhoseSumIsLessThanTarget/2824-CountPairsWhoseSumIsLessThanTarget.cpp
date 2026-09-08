// Last updated: 9/8/2026, 9:49:09 AM
// class Solution {
// public:
//     int countPairs(vector<int>& nums, int target) {
//         int n = nums.size();
//         int count = 0;
//         for(int i=0; i<n; i++){
//             for(int j=i+1; j<n; j++){
//                 int sum = nums[i]+nums[j];
//                 if(sum < target){
//                     count++;
//                 }
//             }
//         }
//         return count;
//     }
// };

///////////////////////////////////////////////////////////////////////



class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int count = 0;
        int i = 0;
        int j = n-1;

        while(i<j){
            int sum = nums[i]+nums[j];

            if(sum < target){
                count += (j-i);
                i++;
                
            }
            else{
                j--;
            }
        }
        return count;
    }
};