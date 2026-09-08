// Last updated: 9/8/2026, 9:49:35 AM
class Solution {
public:
    string removeOccurrences(string s, string part) {
        int index;
        while ((index = s.find(part)) >= 0) {   
            s.erase(index, part.size());         
        }
        return s;
    }
};
