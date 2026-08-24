class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for (auto& row : image) {
            int left = 0;
            int right = row.size() - 1;
            while (left <= right) {
                if (left == right) {
                    row[left] = 1 - row[left]; // 1 - 0 = 1, and 1 - 1 = 0
                } 
                else if (row[left] == row[right]) {
                    row[left] = 1 - row[left];
                    row[right] = 1 - row[right];
                }
                left++;
                right--;
            }
        }
        return image;
    }
    
};