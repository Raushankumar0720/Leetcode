// Last updated: 7/29/2026, 11:00:06 PM
class Solution {
public:
    int gcdOfOddEvenSums(int n) {

        // int sumOdd = 0 ,sumEven = 0 , cnt = 0;

        // for(int i=1; cnt<=n; i+=2){
        //     sumOdd += i;
        // }
        // for(int i=2; cnt<=n; i+=2){
        //     sumEven += i;
        // }

        /////

        // long long sumOdd = n*n;
        // long long sumEven = n*(n+1);
        // return gcd(sumOdd,sumEven);   //  m1   //O(logn) 

        // m2 //////////

        // gcd(n*n,n*(n+1))  => n * gcd(n,n+1) 
        //                   =>  gcd(n,n+1)  => always 1;;
        //                   => therefore n * 1 => n;

        return n;

    }
};