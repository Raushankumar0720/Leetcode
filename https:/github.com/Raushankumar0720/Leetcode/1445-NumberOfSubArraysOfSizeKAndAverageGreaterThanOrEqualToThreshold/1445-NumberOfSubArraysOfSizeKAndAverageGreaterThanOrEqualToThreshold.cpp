// Last updated: 7/24/2026, 10:58:37 PM
class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n = arr.size();
        int windowSum = 0;
        int count = 0;

        for (int i = 0; i < k; i++) {
            windowSum += arr[i];
        }
        if (windowSum / k >= threshold)
            count++;

        for (int i = k; i < n; i++) {
            windowSum += arr[i];
            windowSum -= arr[i - k];
            if (windowSum / k >= threshold)
                count++;
        }
        return count;
    }
};