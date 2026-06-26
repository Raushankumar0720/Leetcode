// Last updated: 6/26/2026, 10:30:05 PM
class Solution {
public:
    string simplifyPath(string path) {
        vector<string> st;      // vector isliye q ki stack me sirf top element hi access kr skte hai ..jb kli result me sara words demand kr rha hai ....
        stringstream ss(path);   // ye ek pipeline bnayega jo phle se bne hue string ke andar se data read krta hai ...
        string token;  // ek string banaye hai jisme store krnege ;;

        // getline(source,destination,delimiter) : delimeter:stop ho jkayega and usko hawa me gayab kr dega ...
        while (getline(ss, token, '/')) {
            // Case 1: Multiple slashes (//) empty token dete hain, ya fir single dot (.)
            if (token == "" || token == ".") {
                continue; 
            } 
            // Case 2: Go back up one directory 
            else if (token == "..") {
                if (!st.empty()) {  // agar khali na ho tb;
                    st.pop_back(); // Pichla folder remove karo
                }
            } 
            // Case 3: Valid folder name
            else {
                st.push_back(token); // Naya folder add karenge 
            }
        }
        
        // Final simplified path build karna
        string result = "";
        for (const string& dir : st) {
            result += "/" + dir;
        }
        
        // Agar stack empty tha (e.g. path = "/../"), toh default "/" return karo
        return result.empty() ? "/" : result;
    }
};