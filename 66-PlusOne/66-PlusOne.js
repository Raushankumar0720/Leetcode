// Last updated: 3/14/2026, 9:43:09 PM
/**
 * @param {number[]} digits
 * @return {number[]}
 */
var plusOne = function(digits) {
    for (let i = 0; i < digits.length; i++) {
        if (digits[digits.length - 1] != 9) {
            digits[digits.length - 1] = digits[digits.length - 1] + 1;
            return digits;
        }
        else if (digits[digits.length - 1] == 9) {
            if (digits.length === 1) {
                digits[0] = 0;
                digits.unshift(1);
                return digits;
            }
            let j = digits.length - 2;
            while (j >= 0 && digits[j] === 9) {
                digits[j] = 0; 
                j--;
            }

            if (j >= 0) {
                digits[j] = digits[j] + 1;
                for (let k = j + 1; k < digits.length; k++) {
                    digits[k] = 0;
                }
                return digits;
            } else {
                for (let k = 0; k < digits.length; k++) {
                    digits[k] = 0;
                }
                digits.unshift(1);
                return digits;
            }
        }
    }
};

