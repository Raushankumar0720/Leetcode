// Last updated: 7/4/2026, 11:28:42 PM
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        int count = 0;
            int maxi = 0 ;
        for(int num : nums){
            

            if(num == 1){
                count++;
                maxi = max(maxi,count);
            }
            if(num == 0){
                count = 0;
            }
        }
        return maxi;
    }
};