// Last updated: 4/11/2026, 3:57:36 PM
class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        vector<string> words;
        string word;

        for (int i = 0; i < n; i++) {
            if (s[i] != ' ') {
                word += s[i];  // concat word
            } else {
                if (!word.empty()) {
                    words.push_back(word);
                    word.clear();
                }
            }
        }
        // push last word if exists
        if (!word.empty()) words.push_back(word);

        // reverse words
        reverse(words.begin(), words.end());

        string result;
        for (int i = 0; i < words.size(); i++) {
            if (i > 0) result += " ";
            result += words[i];
        }
        return result;
    }
};