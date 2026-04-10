// Last updated: 4/10/2026, 3:57:01 PM
1class Solution {
2public:
3    string reverseWords(string s) {
4        int n = s.size();
5        vector<string> words;
6        string word;
7
8        for (int i = 0; i < n; i++) {
9            if (s[i] != ' ') {
10                word += s[i];  // concat word
11            } else {
12                if (!word.empty()) {
13                    words.push_back(word);
14                    word.clear();
15                }
16            }
17        }
18        // push last word if exists
19        if (!word.empty()) words.push_back(word);
20
21        // reverse words
22        reverse(words.begin(), words.end());
23
24        string result;
25        for (int i = 0; i < words.size(); i++) {
26            if (i > 0) result += " ";
27            result += words[i];
28        }
29        return result;
30    }
31};