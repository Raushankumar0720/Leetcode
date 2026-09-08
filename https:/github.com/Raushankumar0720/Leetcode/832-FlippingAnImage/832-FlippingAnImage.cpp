// Last updated: 9/8/2026, 9:52:22 AM
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n = image.size();

        for(int i=0; i<n; i++){
            int left = 0;
            int right = image[0].size()-1;

            while(left < right){
                swap(image[i][left],image[i][right]);
                left++;
                right--;
            }
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                image[i][j] = 1-image[i][j];
            }
        }
        return image;
    }
};