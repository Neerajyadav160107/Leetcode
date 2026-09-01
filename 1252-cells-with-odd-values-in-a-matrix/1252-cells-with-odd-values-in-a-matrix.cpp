class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<vector<int>> matrix(m, vector<int>(n, 0));
        for (int i = 0; i < indices.size(); i++) {

            int ri = indices[i][0];
            int ci = indices[i][1];
            // increment row ri
            for (int j = 0; j < n; j++) {
                matrix[ri][j]++;
            }
            // increment column ci
            for (int j = 0; j < m; j++) {
                matrix[j][ci]++;
            }
        }
        // traverse matrix and count odd elements
        int count = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] % 2 != 0){
                    count++;
                }
            }
        }
        return count;
    }
};