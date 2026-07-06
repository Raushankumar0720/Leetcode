// Last updated: 7/6/2026, 11:44:09 PM
// brute force method

// /**
//  * @param {number} x
//  * @return {boolean}
//  */
// var isPalindrome = function (x) {
//     // Negative numbers are not palindrome
//     if (x < 0) return false;

//     // Convert number to string
//     const str = x.toString();

//     // Compare each character from start and end
//     for (let i = 0; i < str.length; i++) {
//         if (str[i] !== str[str.length - 1 - i]) {
//             return false; // mismatch found
//         }
//     }

//     return true; // all matched
// };




    // optimised methoid


    var isPalindrome = function (x) {
    // Negative numbers are not palindrome
    if (x < 0) return false;

    // Numbers ending with 0 (except 0 itself) are not palindrome
    if (x % 10 === 0 && x !== 0) return false;

    let reversedHalf = 0;

    // Reverse only half of the number
    while (x > reversedHalf) {
        reversedHalf = reversedHalf * 10 + (x % 10);
        x = Math.floor(x / 10);
    }

    // For even length: x === reversedHalf
    // For odd length: x === Math.floor(reversedHalf / 10)
    return x === reversedHalf || x === Math.floor(reversedHalf / 10);
};


    

