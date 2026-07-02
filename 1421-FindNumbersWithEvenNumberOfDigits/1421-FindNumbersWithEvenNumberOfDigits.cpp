// Last updated: 7/2/2026, 11:39:09 PM
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for(int n : nums){
            int digits = to_string(n).size();
            if(digits % 2 == 0) count ++;
        }
        return count;
    }
};