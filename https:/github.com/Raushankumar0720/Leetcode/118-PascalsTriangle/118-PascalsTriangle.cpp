// Last updated: 7/10/2026, 11:51:33 PM
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascal(numRows);
        
        for (int i = 0; i < numRows; i++) {
            pascal[i].resize(i + 1);   // row size = i+1
            pascal[i][0] = pascal[i][i] = 1; // first & last element = 1
            
            for (int j = 1; j < i; j++) {
                pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j];
            }
        }
        return pascal;
    }
};
