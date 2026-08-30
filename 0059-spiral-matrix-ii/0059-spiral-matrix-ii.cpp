class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n, vector<int>(n));

        int min_row = 0;
        int max_row = n - 1;
        int min_col = 0;
        int max_col = n - 1;
        int num = 1;
        while (min_row <= max_row && min_col <= max_col) {
            // Right
            for (int j = min_col; j <= max_col; j++) {
                ans[min_row][j] = num;
                num++;
            }
            min_row++;
            // Down
            for (int i = min_row; i <= max_row; i++) {
                ans[i][max_col] = num;
                num++;
            }
            max_col--;
            // Left
            if (min_row <= max_row) {
                for (int j = max_col; j >= min_col; j--) {
                    ans[max_row][j] = num;
                    num++;
                }
                max_row--;
            }
            // Up
            if (min_col <= max_col) {
                for (int i = max_row; i >= min_row; i--) {
                    ans[i][min_col] = num;
                    num++;
                }
                min_col++;
            }
        }
        return ans;
    }
};