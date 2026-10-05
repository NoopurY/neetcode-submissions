class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        set<char> rows[9];
        set<char> cols[9];
        set<char> boxes[9];

        for (int row = 0; row < 9; row++) {
            for (int col = 0; col < 9; col++) {

                char num = board[row][col];

                if (num == '.')
                    continue;

                // Find which 3x3 box this cell belongs to
                int box = (row / 3) * 3 + (col / 3);

                // Check if number already exists
                if (rows[row].count(num) ||
                    cols[col].count(num) ||
                    boxes[box].count(num)) {
                    return false;
                }

                // Store the number
                rows[row].insert(num);
                cols[col].insert(num);
                boxes[box].insert(num);
            }
        }

        return true;
    }
};