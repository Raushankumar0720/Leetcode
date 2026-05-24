// Last updated: 5/24/2026, 7:35:21 PM
1class Solution {
2public:
3    int finalValueAfterOperations(vector<string>& operations) {
4    int X = 0;
5    for(string op : operations) {
6        if(op[1] == '+') X++;
7        else X--;
8    }
9    return X;
10}
11
12};