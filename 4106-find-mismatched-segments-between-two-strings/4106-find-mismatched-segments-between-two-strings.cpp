class Solution {
public:
    vector<vector<string>> findMismatchedSegments(string s1, string s2) {

        vector<vector<string>> ans;
        int n = s1.size();
        int i = 0;

        while (i < n) {

            // Skip matching characters
            if (s1[i] == s2[i]) {
                i++;
            }
            else {
                // Starting index of mismatch
                int start = i;

                // Continue while characters differ
                while (i < n && s1[i] != s2[i]) {
                    i++;
                }

                // Extract both mismatched substrings
                string sub1 = s1.substr(start, i - start);
                string sub2 = s2.substr(start, i - start);

                ans.push_back({sub1, sub2});
            }
        }

        return ans;
    }
};