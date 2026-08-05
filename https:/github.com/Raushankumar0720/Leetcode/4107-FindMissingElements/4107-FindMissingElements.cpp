// Last updated: 8/5/2026, 10:39:11 PM
class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        vector<int> res;

        for(int i=0; i<nums.size()-1; i++){
            int current  = nums[i] + 1;

            while(current < nums[i+1]){
                res.push_back(current);
                current++;
            }
        }
        return res;
    }
};