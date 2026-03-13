// Last updated: 3/13/2026, 10:08:07 PM
1/**
2 * @param {number[]} nums
3 * @return {void} Do not return anything, modify nums in-place instead.
4 */
5var sortColors = function(nums) {
6    return nums.sort((a,b)=>
7        a-b
8    )
9};