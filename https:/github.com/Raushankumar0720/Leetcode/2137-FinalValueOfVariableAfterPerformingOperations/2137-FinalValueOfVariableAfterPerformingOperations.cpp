// Last updated: 7/4/2026, 11:27:55 PM
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
    int X = 0;
    for(string op : operations) {
        if(op[1] == '+') X++;
        else X--;
    }
    return X;
}

};