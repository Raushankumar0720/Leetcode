// Last updated: 3/18/2026, 11:03:11 PM
1/**
2 * @param {number} x
3 * @return {number}
4 */
5var reverse = function(x) {
6    let rev = 0;
7    let sign = x < 0 ? -1 : 1;
8    x = Math.abs(x);
9
10    while (x > 0) {
11        let digit = x % 10;
12        x = Math.floor(x / 10);
13
14        // Check for overflow before adding digit
15        if (rev > Math.floor((2**31 - 1) / 10)) {
16            return 0;
17        }
18
19        rev = rev * 10 + digit;
20    }
21
22    return rev * sign;
23};