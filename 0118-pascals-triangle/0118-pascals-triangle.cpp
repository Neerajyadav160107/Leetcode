class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int m = numRows;
        vector <vector <int> > v;
        for ( int i=0; i<m ; i++){

            v.push_back(vector<int>(i+1));
            for (int j=0 ; j<=i; j++){
                if (j==0 || j==i){
                    v[i][j]=1;
                }
                else {
                    v[i][j]=v[i-1][j] + v[i-1][j-1];
                }
            }
        }
        return v;
    }
};