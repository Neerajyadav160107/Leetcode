class Solution {
public:
    int maximumLengthSubstring(string s) {
        int left = 0;
        int ans = 0;
        int freq[26] = {0};
        for (int right = 0; right < s.size(); right++) {
            freq[s[right] - 'a']++;
            while (freq[s[right] - 'a'] > 2) { // current window invalid
                freq[s[left] - 'a']--;
                left++;
            }
            ans = max(ans, right - left + 1);
        }

        return ans;
    }
};