// Last updated: 3/18/2026, 11:03:51 PM
/**
 * @param {number[]} nums
 * @return {number[]}
 */

 // brute force 

//     var sortArrayByParity = function(nums) {
//     let result = [];
    
//     // First push even numbers
//     for (let i = 0; i < nums.length; i++) {
//         if (nums[i] % 2 === 0) {
//             result.push(nums[i]);
//         }
//     }
    
//     // Then push odd numbers
//     for (let i = 0; i < nums.length; i++) {
//         if (nums[i] % 2 !== 0) {
//             result.push(nums[i]);
//         }
//     }
    
//     return result;
// };


 // optimised methods

var sortArrayByParity = function(nums) {
    let left = 0, right = nums.length - 1;
    
    while (left < right) {
        if (nums[left] % 2 > nums[right] % 2) {
            // Swap if left is odd and right is even
            [nums[left], nums[right]] = [nums[right], nums[left]];
        }
        
        if (nums[left] % 2 === 0) left++;
        if (nums[right] % 2 === 1) right--;
    }
    
    return nums;
};
