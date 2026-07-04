// Last updated: 7/4/2026, 11:28:55 PM
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> freq;
        vector<int> result;
        
        for(int num : nums1) {
            freq[num]++;
        }
        
        for(int num : nums2) {
            if(freq[num] > 0) {
                result.push_back(num);
                freq[num]--;
            }
        }
        
        return result;
    }
};
