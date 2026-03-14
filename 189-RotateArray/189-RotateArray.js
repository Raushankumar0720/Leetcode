// Last updated: 3/14/2026, 9:43:11 PM
/**
 * @param {number[]} nums
 * @param {number} k
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var rotate = function(nums, k) {
    const n = nums.length;

    // To handle cases where k is larger than n
    k = k % n; 

    // Create a new array to store the rotated result
    let newArray = new Array(n); 
    
    // Rotate the array by calculating the new position for each element
    for (let i = 0; i < n; i++) {
        newArray[(i + k) % n] = nums[i];
    }
    
    // Assign the new array back to the original array
    for (let i = 0; i < n; i++) {
        nums[i] = newArray[i];
    }
};
