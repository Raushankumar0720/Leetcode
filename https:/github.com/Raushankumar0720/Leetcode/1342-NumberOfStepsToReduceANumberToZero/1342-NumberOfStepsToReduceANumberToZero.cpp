// Last updated: 9/8/2026, 9:50:57 AM
class Solution {
public:
    int numberOfSteps(int num) {
        int steps = 0;
        while(num > 0){
            if(num%2==0){
                num/=2;
            }
            else{
                num-=1;
            }
            steps++;
        }
        return steps;
    }
};