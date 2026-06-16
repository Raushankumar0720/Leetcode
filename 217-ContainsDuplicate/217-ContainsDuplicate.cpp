// Last updated: 6/16/2026, 11:46:34 PM
1class Solution {
2public:
3    bool containsDuplicate(vector<int>& nums) {
4        unordered_set <int> exist;
5
6        for(int num : nums){
7            if(!exist.count(num)){
8                exist.insert(num);
9            }
10            else{
11                return true;
12            }
13        }
14        return false;
15    }
16};