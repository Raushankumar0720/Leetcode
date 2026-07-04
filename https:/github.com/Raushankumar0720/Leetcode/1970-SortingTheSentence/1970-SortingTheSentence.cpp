// Last updated: 7/4/2026, 11:27:57 PM
class Solution {
public:
    string sortSentence(string s) {
        vector<string> arr(10);

        stringstream ss(s);
        string word;

        while (ss >> word) {
            int pos = word.back() - '0';

            word.pop_back();
            arr[pos] = word;
        }

        string ans = "";
        for (int i = 1; i <= 9; i++) {
            if (arr[i] != "") {
                ans += arr[i] + " ";
            }
        }

        ans.pop_back();

        return ans;
    }
};