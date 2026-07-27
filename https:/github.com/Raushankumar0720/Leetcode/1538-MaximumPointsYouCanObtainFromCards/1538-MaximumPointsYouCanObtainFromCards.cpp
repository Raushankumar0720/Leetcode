// Last updated: 7/27/2026, 9:07:10 AM
class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        
        
        int currSum = 0;
        for(int i = 0; i < k; i++) {
            currSum += cardPoints[i];
        }
        
        int maxPoints = currSum;
        
        
        for(int i = 0; i < k; i++) {
            currSum -= cardPoints[k - 1 - i];      
            currSum += cardPoints[n - 1 - i];       
            maxPoints = max(maxPoints, currSum);
        }
        
        return maxPoints;
    }
};
