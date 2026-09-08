// Last updated: 9/8/2026, 9:49:34 AM
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector <int> ans;

        for( int i=0; i< nums.size() ; i++){
            ans.push_back(nums[nums[i]]);
        }
        return ans;
    }
};