class Solution {
   public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        int l = 0;
        int r = (rows * cols) - 1;

        while (l <= r) {
            int middle = (l + r) / 2;
            int row = middle / cols;
            int col = middle % cols;
            if (target < matrix[row][col]) {
                r = middle - 1;
            } else if (target > matrix[row][col]) {
                l = middle + 1;
            }
            if (target == matrix[row][col]) {
                return true;
            }
        }
        return false;
    }
};
