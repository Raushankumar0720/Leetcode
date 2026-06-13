// Last updated: 6/13/2026, 11:34:58 AM
1class Solution {
2public:
3    vector<string> commonChars(vector<string>& words) {
4        vector <string> res={};
5        for(char i : words[0]){
6            string temp="";
7            temp+=i;
8            bool found=true;
9            for(int j=1;j<words.size();j++){
10                if(!words[j].contains(i)){
11                    found=false;
12                    break;
13                }
14                words[j].erase(words[j].find(i),1);
15            }
16            if(found){
17                res.push_back(temp);
18            }
19        }
20        return res;
21    }
22};
23