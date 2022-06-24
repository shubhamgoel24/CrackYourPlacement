bool findmatch(vector<vector<char>>& mat, string pat, int x, int y,
               int nrow, int ncol, int level)
{
    int l = pat.length();
    if (level == l)
        return true;
    if (x < 0 || y < 0 || x >= nrow || y >= ncol)
        return false;
    if (mat[x][y] == pat[level]) {
        char temp = mat[x][y];
        mat[x][y] = '#';
        bool res = findmatch(mat, pat, x - 1, y, nrow, ncol, level + 1) |
                   findmatch(mat, pat, x + 1, y, nrow, ncol, level + 1) |
                   findmatch(mat, pat, x, y - 1, nrow, ncol, level + 1) |
                   findmatch(mat, pat, x, y + 1, nrow, ncol, level + 1);
        mat[x][y] = temp;
        return res;
    }
    else
        return false;
}

class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        int l = word.length();
        int r = board.size();
        int c = board[0].size();
        if (l > r * c)
            return false;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (board[i][j] == word[0])
                    if (findmatch(board, word, i, j, r, c, 0))
                        return true;
            }
        }
        return false;
    }
};