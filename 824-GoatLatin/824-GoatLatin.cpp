// Last updated: 6/2/2026, 4:39:34 PM
1class Solution {
2public:
3    string toGoatLatin(string sentence) {
4        unordered_set<char> vowels = {
5            'a','e','i','o','u',
6            'A','E','I','O','U'  
7              };      
8
9              stringstream sent(sentence);
10
11              string word;
12              string result;
13
14              int index = 1;
15
16              while(sent >> word){
17                if(vowels.count(word[0])){
18                    word += "ma";
19                }
20                else{
21                    word = word.substr(1) + word[0] + "ma";
22                }
23
24                word += string(index , 'a');
25
26                if(!result.empty()){
27                    result += " ";
28                }
29
30                result += word;
31                index++;
32              }
33              return result;
34    }
35};