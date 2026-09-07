class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        // making the 1st col of all 1's
        for (int i = 0; i < rows; i++) {
            if (grid[i][0] == 0) { // flip
                for (int j = 0; j < cols; j++) {
                    if (grid[i][j] == 0)
                        grid[i][j] = 1;
                    else
                        grid[i][j] = 0;
                }
            }
        }
        // flip the cols where n(0s)>n(1s)
        for (int j = 0; j < cols; j++) {
            int noz = 0;
            int noo = 0;
            for (int i = 0; i < rows; i++) {
                if (grid[i][j] == 0)
                    noz++;
                else
                    noo++;
            }
            if (noz > noo) {
                for (int i = 0; i < rows; i++) {
                    if (grid[i][j] == 0)
                        grid[i][j] = 1;
                    else
                        grid[i][j] = 0;
                }
            }
        }
        // now this makes the matrix - the largest of it sum
        // now we'll convert the binary to decimal to store in a sum
        int sum = 0;
        for (int i = 0; i < rows; i++) {
            int x = 1;
            for (int j = cols - 1; j >= 0; j--) {
                sum += grid[i][j] * x;
                x *= 2;
            }
        }
        return sum;
    }
};