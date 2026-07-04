// Last updated: 7/4/2026, 11:27:48 PM
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