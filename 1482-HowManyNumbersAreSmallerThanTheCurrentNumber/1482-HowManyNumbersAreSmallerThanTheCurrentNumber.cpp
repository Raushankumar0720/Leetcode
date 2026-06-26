// Last updated: 6/26/2026, 10:28:59 PM
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> sorted = nums;
        sort(sorted.begin(), sorted.end());
        
        unordered_map<int,int> mp;
        for(int i = 0; i < sorted.size(); i++) {
            if(mp.find(sorted[i]) == mp.end()) {
                mp[sorted[i]] = i; // first occurrence index = count of smaller numbers
            }
        }
        
        vector<int> result;
        for(int num : nums) {
            result.push_back(mp[num]);
        }
        return result;
    }
};
