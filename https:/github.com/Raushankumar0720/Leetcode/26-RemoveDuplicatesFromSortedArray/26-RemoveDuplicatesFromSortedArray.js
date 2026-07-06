// Last updated: 7/6/2026, 11:44:10 PM
// brute force

/**
 * @param {number[]} nums
 * @return {number}
 */

var removeDuplicates = function(nums) {
    if (nums.length === 0) return 0;

    let temp = [];

    for (let i = 0; i < nums.length; i++) {
        if (!temp.includes(nums[i])) {   // costly O(n) check
            temp.push(nums[i]);
        }
    }

    // Copy back into nums
    for (let i = 0; i < temp.length; i++) {
        nums[i] = temp[i];
    }

    return temp.length;
};


// optimised

// var removeDuplicates = function(nums) {
//     if (nums.length === 0) return 0;

//     // Pointer for the place to insert unique elements
//     let k = 1;  

//     for (let i = 1; i < nums.length; i++) {
//         if (nums[i] !== nums[i - 1]) {
//             nums[k] = nums[i];  // place unique element
//             k++;
//         }
//     }

//     return k;
// };
