// Last updated: 7/26/2026, 11:26:19 PM
// class Solution {
// public:
//     int totalFruit(vector<int>& fruits) {
//         int n = fruits.size();
//         int max_len = 0;

//         for (int i = 0; i < n; i++) {
//             unordered_set<int> types;
//             for (int j = i; j < n; j++) {
//                 types.insert(fruits[j]);
//                 if (types.size() <= 2) {
//                     max_len = max(max_len, j - i + 1);
//                 } else {
//                     break;
//                 }
//             }
//         }
//         return max_len;
//     }
// };

/////////////////////////////

class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        int left = 0, max_len = 0;

        unordered_map<int, int> basket;

        for (int right = 0; right < fruits.size(); right++) {
            basket[fruits[right]]++;

            while (basket.size() > 2) {
                basket[fruits[left]]--;
                if (basket[fruits[left]] == 0)
                    basket.erase(fruits[left]);
                left++;
            }
            max_len = max(max_len, right - left + 1);
        }
        return max_len;
    }
};