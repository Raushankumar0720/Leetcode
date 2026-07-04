// Last updated: 7/4/2026, 11:28:47 PM
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans;
        for(int i=1; i<=n; i++)
            ans.push_back(i%15==0 ? "FizzBuzz" : i%3==0 ? "Fizz" : i%5==0 ? "Buzz" : to_string(i));
        return ans;
    }
};
