// Last updated: 3/17/2026, 11:39:22 PM
1// brute force method
2
3// /**
4//  * @param {number} x
5//  * @return {boolean}
6//  */
7// var isPalindrome = function (x) {
8//     // Negative numbers are not palindrome
9//     if (x < 0) return false;
10
11//     // Convert number to string
12//     const str = x.toString();
13
14//     // Compare each character from start and end
15//     for (let i = 0; i < str.length; i++) {
16//         if (str[i] !== str[str.length - 1 - i]) {
17//             return false; // mismatch found
18//         }
19//     }
20
21//     return true; // all matched
22// };
23
24
25
26
27    // optimised 
28
29
30    var isPalindrome = function (x) {
31    // Negative numbers are not palindrome
32    if (x < 0) return false;
33
34    // Numbers ending with 0 (except 0 itself) are not palindrome
35    if (x % 10 === 0 && x !== 0) return false;
36
37    let reversedHalf = 0;
38
39    // Reverse only half of the number
40    while (x > reversedHalf) {
41        reversedHalf = reversedHalf * 10 + (x % 10);
42        x = Math.floor(x / 10);
43    }
44
45    // For even length: x === reversedHalf
46    // For odd length: x === Math.floor(reversedHalf / 10)
47    return x === reversedHalf || x === Math.floor(reversedHalf / 10);
48};
49
50
51    
52
53