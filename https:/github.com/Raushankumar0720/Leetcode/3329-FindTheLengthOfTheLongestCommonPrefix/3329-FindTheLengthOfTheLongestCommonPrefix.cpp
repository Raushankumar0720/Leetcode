// Last updated: 7/5/2026, 11:46:33 PM
class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<int> prefixes;

        // Step 1: arr1 ke saare prefixes insert karna
        for (int num : arr1) {
            while (num > 0) {
                prefixes.insert(num);
                num /= 10;
            }
        }

        int max_length = 0;

        // Step 2: arr2 ke prefixes check karna
        for (int num : arr2) {
            while (num > 0) {
                if (prefixes.count(num)) {
                    int current_len = to_string(num).length();
                    max_length = max(max_length, current_len);
                    break; // Ek baar bada prefix mil gaya, toh usse chote check karne ki zarurat nahi
                }
                num /= 10; 
            }
        }

        return max_length;
    }
};