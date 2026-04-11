// Last updated: 4/11/2026, 3:57:29 PM
class Solution {
public:
bool isLetter(char c){
    c = tolower(c);
    return c=='a'|| c=='b' || c=='c' || c=='d' || c=='e' || c=='f' || c=='g' || c=='h' || c=='i' || c=='j' || c=='k' || c=='l' || c=='m' || c=='n' || c=='o' || c=='p' || c=='q' || c=='r' || c=='s' || c=='t' || c=='u' || c=='v' || c=='w' || c=='x' || c=='y' || c=='z' ;
}
    string reverseOnlyLetters(string s) {
        int l=0 , r=s.size()-1;
        
        while(l<r){
            while(l<r && !isLetter(s[l])) l++;
            while(l<r && !isLetter(s[r])) r--;
            if(l<r){
                swap(s[l],s[r]);
                l++;
                r--;
            }
        }
        return s;
    }
};