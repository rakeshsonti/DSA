class Solution
{
    //tc-> O(n!*n) exponential in nature 
//sc->O(N) using hash for maintaining the track O(n)+O(n)+O(n) left row,upper diagonal and lower diagonal track
    public:

        vector<vector < string>> solveNQueens(int n)
        {
            vector<string> board(n);
            vector<vector < string>> ans;
            string s(n, '.');
            for (int i = 0; i < n; i++)
            {
                board[i] = s;
            }
            vector<int> leftRow(n, 0), upperDiagonal(2 *n - 1, 0), lowerDiagonal(2 *n - 1, 0);
            func(0, board, ans, n, leftRow, upperDiagonal, lowerDiagonal);
            return ans;
        }
    void func(int col, vector<string> &board, vector<vector< string >> &ans, int n, vector< int > &leftRow, vector< int > &upperDiagonal, vector< int > &lowerDiagonal)
    {
        if (col == n)
        {
            ans.push_back(board);
            return;
        }
        for (int row = 0; row < n; row++)
        {
            if (leftRow[row] == 0 && lowerDiagonal[row + col] == 0 && upperDiagonal[n - 1 + col - row] == 0)
            {
                leftRow[row] = 1;
                lowerDiagonal[row + col] = 1;
                upperDiagonal[n - 1 + col - row] = 1;
                board[row][col] = 'Q';
                func(col + 1, board, ans, n, leftRow, upperDiagonal, lowerDiagonal);
                board[row][col] = '.';
                leftRow[row] = 0;
                lowerDiagonal[row + col] = 0;
                upperDiagonal[n - 1 + col - row] = 0;
            }
        }
    }
};
//========================================================================
class Solution
{
//tc-> O(n!*n) exponential in nature 
//sc->ON^2)
    public:
        bool isPutQ(int row, int col, vector<string> board, int n)
        {
            int r = row, c = col;
           	//diagonal upper
            while (r >= 0 && c >= 0)
            {
                if (board[r][c] == 'Q') return false;
                r--;
                c--;
            }
           	//diagonal lower
            r = row, c = col;
            while (r < n && c >= 0)
            {
                if (board[r][c] == 'Q') return false;
                r++;
                c--;
            }
            r = row;
            c = col;
           	//left side row
            while (c >= 0)
            {
                if (board[r][c] == 'Q') return false;
                c--;
            }
            return true;
        }
    vector<vector < string>> solveNQueens(int n)
    {
        vector<string> board(n);
        vector<vector < string>> ans;
        string s(n, '.');
        for (int i = 0; i < n; i++)
        {
            board[i] = s;
        }
        func(0, board, ans, n);
        return ans;
    }
    void func(int col, vector<string> &board, vector<vector < string>> &ans, int n)
    {
        if (col == n)
        {
            ans.push_back(board);
            return;
        }
        for (int row = 0; row < n; row++)
        {
            if (isPutQ(row, col, board, n))
            {
                board[row][col] = 'Q';
                func(col + 1, board, ans, n);
                board[row][col] = '.';
            }
        }
    }
};
