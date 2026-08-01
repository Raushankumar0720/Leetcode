// Last updated: 8/2/2026, 12:05:45 AM
class Solution {
public:
    int compress(vector<char>& chars) {
        

        int n = chars.size();
        int idx = 0;
        
        for (int i = 0; i < n; i++) {
            int count = 1;
            while (i + 1 < n && chars[i] == chars[i + 1]) {
                count++;
                i++;
            }

            chars[idx++] = chars[i];

            if(count > 1){
                string cnt = to_string(count);
                for(char c : cnt){
                    chars[idx++] = c;
                }
            }
        }
         return idx;
    }
};



