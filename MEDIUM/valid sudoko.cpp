//https://leetcode.com/problems/valid-sudoku/
//Valid Sudoko
class Solution 
{
public:
    bool isValidSudoku(vector<vector<char>>& board) 
    {
        vector<set<char>> rows(9), cols(9), blck(9);              
        
        for (int i = 0; i < 9; i++) 
            for (int j = 0; j < 9; j++) 
                if (board[i][j] != '.')
                {
                    int d = board[i][j];
                    int b = (i/3)*3+j/3;
                    if (!rows[i].emplace(d).second) return false; 
                    if (!cols[j].emplace(d).second) return false;   
                    if (!blck[b].emplace(d).second) return false;   
                }
        return true;
    }
};