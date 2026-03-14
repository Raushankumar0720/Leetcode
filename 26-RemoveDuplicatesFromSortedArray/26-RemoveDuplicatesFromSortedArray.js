// Last updated: 3/14/2026, 9:43:08 PM
// brute force

/**
 * @param {number[]} nums
 * @return {number}
 */
var removeDuplicates = function(nums) {
    if (nums.length === 0) return 0;

    // Pointer for the place to insert unique elements
    let k = 1;  

    for (let i = 1; i < nums.length; i++) {
        if (nums[i] !== nums[i - 1]) {
            nums[k] = nums[i];  // place unique element
            k++;
        }
    }

    return k;
};
