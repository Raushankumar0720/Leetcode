// Last updated: 3/17/2026, 11:35:01 PM
1/**
2 * @param {number} x
3 * @return {boolean}
4 */
5var isPalindrome = function(x) {
6    // Negative numbers are not palindrome
7    if (x < 0) return false;
8
9    // Convert number to string
10    const str = x.toString();
11
12    // Compare each character from start and end
13    for (let i = 0; i < str.length; i++) {
14        if (str[i] !== str[str.length - 1 - i]) {
15            return false; // mismatch found
16        }
17    }
18
19    return true; // all matched
20
21};