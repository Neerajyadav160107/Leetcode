class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int m = mat.size();
        int sum = 0;
        for (int i = 0; i <=m-1; i++) {
            sum += mat[i][i];
            if (i != m - 1 - i) {
            sum += mat[i][m - 1 - i];
            }       
        }
        return sum;
    }    
};