// Last updated: 9/8/2026, 9:52:20 AM
class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int R = matrix.size();    // Original matrix ki rows
        int C = matrix[0].size(); // Original matrix ke columns

        // Naya 2D vector (matrix) banaya
        // Jisme C rows hongi aur har row mein R elements (columns) honge
        vector<vector<int>> ans(C, vector<int>(R));

        // Original matrix ko traverse kar rahe hain
        for (int i = 0; i < R; i++) {
            for (int j = 0; j < C; j++) {
                // Main magic yahan ho raha hai: [i][j] ban gaya [j][i]
                ans[j][i] = matrix[i][j];
            }
        }

        return ans;
    }
};