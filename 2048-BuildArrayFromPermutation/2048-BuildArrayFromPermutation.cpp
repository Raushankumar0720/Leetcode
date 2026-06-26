// Last updated: 6/26/2026, 10:28:42 PM
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