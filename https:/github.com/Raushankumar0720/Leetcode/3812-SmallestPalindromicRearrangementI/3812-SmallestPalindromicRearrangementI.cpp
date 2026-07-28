// Last updated: 7/29/2026, 12:06:42 AM
class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.length();

        if(n == 1) return s;

        string half = s.substr(0,n/2);
        sort(half.begin(),half.end());

        string result = half;
        if (n % 2) result += s[n/2];  
        reverse(half.begin(), half.end());
        result += half;
        
        return result;

        // for(int i=0 ; i<n ; i++){
        //     if(n%2 == 1){
        //         vector<int> mid = int(n/2);
        //         sort(mid.begin(),mid.end());
        //     }
        // }
    }
};