// Last updated: 3/17/2026, 11:45:49 PM
1/**
2 * @param {number[]} nums
3 * @return {number[]}
4 */
5
6 // brute force 
7
8//     var sortArrayByParity = function(nums) {
9//     let result = [];
10    
11//     // First push even numbers
12//     for (let i = 0; i < nums.length; i++) {
13//         if (nums[i] % 2 === 0) {
14//             result.push(nums[i]);
15//         }
16//     }
17    
18//     // Then push odd numbers
19//     for (let i = 0; i < nums.length; i++) {
20//         if (nums[i] % 2 !== 0) {
21//             result.push(nums[i]);
22//         }
23//     }
24    
25//     return result;
26// };
27
28
29 // optimised methods
30
31var sortArrayByParity = function(nums) {
32    let left = 0, right = nums.length - 1;
33    
34    while (left < right) {
35        if (nums[left] % 2 > nums[right] % 2) {
36            // Swap if left is odd and right is even
37            [nums[left], nums[right]] = [nums[right], nums[left]];
38        }
39        
40        if (nums[left] % 2 === 0) left++;
41        if (nums[right] % 2 === 1) right--;
42    }
43    
44    return nums;
45};
46