// Last updated: 9/8/2026, 9:49:16 AM
class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int count = 0;
        for(int h : hours) {
            if(h >= target) count++;
        }
        return count;
    }
};