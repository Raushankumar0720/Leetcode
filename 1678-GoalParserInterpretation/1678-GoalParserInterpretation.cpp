// Last updated: 5/24/2026, 7:34:00 PM
1class Solution {
2public:
3    string interpret(string command) {
4    string result = "";
5    for(int i = 0; i < command.size(); ) {
6        if(command[i] == 'G') {
7            result += "G";
8            i++;
9        } else if(command[i] == '(' && command[i+1] == ')') {
10            result += "o";
11            i += 2;
12        } else { // "(al)"
13            result += "al";
14            i += 4;
15        }
16    }
17    return result;
18}
19
20};