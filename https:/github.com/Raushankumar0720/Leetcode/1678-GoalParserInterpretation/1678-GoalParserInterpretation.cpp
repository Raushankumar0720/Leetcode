// Last updated: 9/8/2026, 9:50:09 AM
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