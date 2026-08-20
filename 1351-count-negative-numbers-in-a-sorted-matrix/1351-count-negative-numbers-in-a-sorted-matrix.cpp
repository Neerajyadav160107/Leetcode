class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        
        int r = 0;
        int c = n - 1;
        int count = 0;
        
        // Traverse from top-right to bottom-left
        while (r < m && c >= 0) {
            if (grid[r][c] < 0) {
                // If grid[r][c] is negative, everything below it in this column is also negative
                count += (m - r);
                c--; // Move left
            } else {
                r++; // Move down
            }
        }
        
        return count;
    }
};