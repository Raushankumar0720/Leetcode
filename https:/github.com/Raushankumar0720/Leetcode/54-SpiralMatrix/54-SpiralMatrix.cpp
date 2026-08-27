// Last updated: 8/27/2026, 5:12:36 PM
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        int row = matrix.size();
        int col = matrix[0].size();

        vector<int> res;

        int top = 0;
        int down = row - 1;
        int left = 0;
        int right = col - 1;

        int dir = 0;

        while(top <= down && left <= right){
            if(dir == 0){
                // fixed -> row (top)
                // travel => left -> right

                for(int i = left; i<=right ; i++){
                    res.push_back(matrix[top][i]);
                }
                top++;
            }

            if(dir == 1){
                // fixed => col (right)
                // travel => top -> down

                for(int i = top; i<=down; i++){
                    res.push_back(matrix[i][right]);
                }
                right--;
            }

            if(dir == 2){
                // fixed => row (down)
                // travel => right -> left

                for(int i = right; i >= left; i--){
                    res.push_back(matrix[down][i]);
                }
                down--;
            }

            if(dir == 3){
                // fixed => col (left)
                // travel => down -> top

                for(int i = down; i >= top ; i--){
                    res.push_back(matrix[i][left]);
                }
                left++;
            }
            dir++;

            if(dir == 4){
                dir = 0;
            }
        }

        return res;
    }
};