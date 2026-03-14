// Last updated: 3/14/2026, 9:43:14 PM
/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
// var twoSum = function(nums, target) {
//     for (let i = 0; i < nums.length; i++) {
//         for (let j = i + 1; j < nums.length; j++) {
//             if (nums[i] + nums[j] === target) {
//                 return [i, j];
//             }
//         }
//     }
//     return [];
// };

// console.log(twoSum([2,7,11,15], 9));


var twoSum = function(nums, target) {
    let obj = {};

    for (let i = 0; i < nums.length; i++) {
        let value = target - nums[i];

        
        if (obj[value] !== undefined) {
            return [obj[value], i];
        }

       
        obj[nums[i]] = i;
    }
    return [];
};

console.log(twoSum([2,7,11,15], 9));