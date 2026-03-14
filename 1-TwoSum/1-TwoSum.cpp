// Last updated: 3/14/2026, 9:43:13 PM
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i] + nums[j] == target){
                    return {i,j};
                }
            }
        }
        return {-1,-1};
    }
};