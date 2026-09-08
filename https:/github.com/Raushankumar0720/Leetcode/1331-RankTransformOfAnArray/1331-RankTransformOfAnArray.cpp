// Last updated: 9/8/2026, 9:51:20 AM
class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> sorted = arr;
        sort(sorted.begin(), sorted.end());
        unordered_map<int,int> rank;
        int r = 1;
        for(int x : sorted){
            if(rank.find(x) == rank.end()){
                rank[x] = r++;
            }
        }
        vector<int> res;
        for(int x : arr){
            res.push_back(rank[x]);
        }
        return res;
    }
};
