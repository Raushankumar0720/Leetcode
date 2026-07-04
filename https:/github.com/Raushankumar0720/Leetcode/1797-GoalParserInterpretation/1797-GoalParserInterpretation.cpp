// Last updated: 7/4/2026, 11:28:01 PM
class Solution {
public:
    string interpret(string command) {
    string result = "";
    for(int i = 0; i < command.size(); ) {
        if(command[i] == 'G') {
            result += "G";
            i++;
        } else if(command[i] == '(' && command[i+1] == ')') {
            result += "o";
            i += 2;
        } else { // "(al)"
            result += "al";
            i += 4;
        }
    }
    return result;
}

};