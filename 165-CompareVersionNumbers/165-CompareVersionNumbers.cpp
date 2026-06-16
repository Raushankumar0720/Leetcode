// Last updated: 6/16/2026, 2:09:34 PM
1class Solution {
2public:
3    int compareVersion(string version1, string version2) {
4        int i=0 , j=0 , n=version1.size(), m=version2.size();
5
6        while(i<n || j< m){
7            long num1 = 0 , num2 = 0;
8
9            while(i<n && version1[i] != '.' ){
10                num1 = num1*10 + (version1[i] - '0');
11                i++;
12            }
13
14            while(j<m && version2[j] != '.' ){
15                num2 =  num2*10 + (version2[j] - '0');
16                j++;
17            }
18
19            if(num1 < num2) return -1;
20            if(num1 > num2) return 1;
21
22            i++, j++;
23        }
24
25        return 0;
26    }
27};