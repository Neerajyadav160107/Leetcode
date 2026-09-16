class Solution {
public:
    int countRotations(string s, int k) {
        int n = s.size();
        int equal = 0;
        int unequal = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == s[(i + 1) % n]) {
                equal++;
            }
            else {
                unequal++;
            }
        }
        int ans = 0;
        if (k == equal) {
            ans = unequal;
        }
        else if (k == equal - 1) {
            ans = equal;
        }
        else {
            ans = 0;
        }
        return ans;
    }
};