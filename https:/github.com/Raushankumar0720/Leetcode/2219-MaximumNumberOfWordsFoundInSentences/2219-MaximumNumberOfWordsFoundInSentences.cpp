// Last updated: 7/4/2026, 11:27:53 PM
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxWords = 0;

        for(const string& sentence : sentences){
            stringstream ss(sentence);
            string words;
            int countWord = 0;

            while(getline(ss,words,' ')){
                countWord++;
            }
            maxWords = max(maxWords,countWord);
        }
        return maxWords;
    }
};