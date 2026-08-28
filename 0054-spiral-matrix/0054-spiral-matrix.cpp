class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int min_row = 0;
        int max_row = m - 1;
        int min_col = 0;
        int max_col = n - 1;

        vector<int> ans;
        while (min_row <= max_row && min_col <= max_col) {
            // Right
            for (int j = min_col; j <= max_col; j++) {
                ans.push_back(matrix[min_row][j]);
            }
            min_row++;
            // Down
            for (int i = min_row; i <= max_row; i++) {
                ans.push_back(matrix[i][max_col]);
            }
            max_col--;
            // Left
            if (min_row <= max_row) {
                for (int j = max_col; j >= min_col; j--) {
                    ans.push_back(matrix[max_row][j]);
                }
                max_row--;
            }
            // Up
            if (min_col <= max_col) {
                for (int i = max_row; i >= min_row; i--) {
                    ans.push_back(matrix[i][min_col]);
                }
                min_col++;
            }
        }
        return ans;
    }
};