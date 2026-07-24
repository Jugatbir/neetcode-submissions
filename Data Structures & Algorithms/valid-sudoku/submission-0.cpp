class Solution {
   public:
    bool isValidSudoku(vector<vector<char>>& board) {

        for (int i = 0; i < 9; i++) {
            unordered_set<char> row;
            unordered_set<char> col;
            unordered_set<char> box;
            for (int j = 0; j < 9; j++) {
                if (board[i][j] != '.' && row.find(board[i][j]) != row.end()){
                    return false;
                }
                    row.insert(board[i][j]);

                if (board[j][i] != '.' && col.find(board[j][i]) != col.end()) {
                    return false;
                }
                    col.insert(board[j][i]);
                int row_ind = 3 * (i / 3);
                int col_ind = 3 * (i % 3);

                if (board[row_ind + j / 3][col_ind + j % 3] != '.' &&
                    box.find(board[row_ind + j / 3][col_ind + j % 3]) != box.end()) {
                    return false;
                }
                    box.insert(board[row_ind + j / 3][col_ind + j % 3]);
            }
        }
        return true;
    }
};
