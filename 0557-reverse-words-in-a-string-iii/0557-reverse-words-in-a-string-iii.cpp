class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        int start = 0;
        for (int i = 0; i <= n; ++i) {
            // Check if we hit a space or the end of the string
            if (i==n || s[i]==' ') {
                reverse(s.begin() + start, s.begin() + i); // Reverse the current word in-place
                start = i + 1;
            }
        }
        
        return s;
    }
};
