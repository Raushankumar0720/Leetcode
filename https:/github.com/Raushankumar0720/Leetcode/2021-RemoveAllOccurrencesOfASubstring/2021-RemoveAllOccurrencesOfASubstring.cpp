// Last updated: 7/25/2026, 12:04:52 AM
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
