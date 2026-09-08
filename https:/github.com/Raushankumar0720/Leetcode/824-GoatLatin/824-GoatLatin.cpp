// Last updated: 9/8/2026, 9:52:25 AM
class Solution {
public:
    string toGoatLatin(string sentence) {
        unordered_set<char> vowels = {
            'a','e','i','o','u',
            'A','E','I','O','U'  
              };      

              stringstream sent(sentence);

              string word;
              string result;

              int index = 1;

              while(sent >> word){
                if(vowels.count(word[0])){
                    word += "ma";
                }
                else{
                    word = word.substr(1) + word[0] + "ma";
                }

                word += string(index , 'a');

                if(!result.empty()){
                    result += " ";
                }

                result += word;
                index++;
              }
              return result;
    }
};