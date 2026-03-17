// Last updated: 3/17/2026, 11:47:57 PM
1/**
2 * @param {number[]} nums
3 * @return {number[]}
4 */
5var sortArray = function(nums) {
6    if (nums.length <= 1) return nums; // base case
7
8    const mid = Math.floor(nums.length / 2);
9    const left = sortArray(nums.slice(0, mid));
10    const right = sortArray(nums.slice(mid));
11
12    return merge(left, right);
13};
14
15function merge(left, right) {
16    let result = [];
17    let i = 0, j = 0;
18
19    // Compare elements from both halves
20    while (i < left.length && j < right.length) {
21        if (left[i] <= right[j]) {
22            result.push(left[i]);
23            i++;
24        } else {
25            result.push(right[j]);
26            j++;
27        }
28    }
29
30    // Add remaining elements
31    while (i < left.length) {
32        result.push(left[i]);
33        i++;
34    }
35    while (j < right.length) {
36        result.push(right[j]);
37        j++;
38    }
39
40    return result;
41}
42