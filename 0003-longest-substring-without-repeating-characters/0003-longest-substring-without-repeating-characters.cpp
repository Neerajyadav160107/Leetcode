
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int maxLength = 0;
        int freq[128] = {0};

        for (int right = 0; right < s.size(); right++) {
            while (freq[s[right]] > 0) {
                freq[s[left]]--;
                left++;
            }
            freq[s[right]]++;
            maxLength = max(maxLength, right - left + 1);
        }
        return maxLength;
    }
};
