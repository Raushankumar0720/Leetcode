// Last updated: 9/8/2026, 9:49:18 AM
class Solution {
public:
    int sumOfMultiples(int n) {
        int ans = 0;
        for(int i=1; i<=n; i++){
            if(i%3 == 0 || i%5==0 || i%7==0){
                ans +=i;
            }
        }
        return ans;
    }
};