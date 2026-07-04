// Last updated: 7/4/2026, 11:28:14 PM
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