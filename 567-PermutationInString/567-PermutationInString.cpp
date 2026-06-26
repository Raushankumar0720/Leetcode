// Last updated: 6/26/2026, 10:29:26 PM
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.length();
        int m = s2.length();

        if (n > m)
            return false;

        vector<int> s1_map(26, 0);
        vector<int> window_map(26, 0);

        for (int i = 0; i < n; i++) {
            s1_map[s1[i] - 'a']++;     // s1 ke characters ka count
            window_map[s2[i] - 'a']++; // s2 ki pehli window ka count
        }

        for (int i = n; i < m; i++) {
            // Agar pichli window match kar gayi, toh true return kar do
            if (s1_map == window_map) {
                return true;
            }

            // Slide Window: Right side se naya character andar lo
            char newChar = s2[i];
            window_map[newChar - 'a']++;
            
            // Slide Window: Left side se purana character bahar nikalo
            char oldChar = s2[i - n];
            window_map[oldChar - 'a']--;
        }
        
        // Last Check: Loop khatam hone ke baad aakhri window match check karo
        return s1_map == window_map;
        }
    };