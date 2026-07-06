// Last updated: 7/6/2026, 11:44:12 PM
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> box;

        // vector.insert(wheretoput , what to put first , what to put at last) 

        box.insert(box.end(), nums1.begin(), nums1.end());
        box.insert(box.end(), nums2.begin(), nums2.end());

        sort(box.begin(),box.end());

        int n = box.size();

        if(n%2 == 1){
            return box[n/2];  // odd elements in final vector box;
        }
        else{
            return (box[n/2 -1]+box[n/2])/2.0;
        }

    }
};