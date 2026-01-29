#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:

    bool isSafe(vector<vector<char>> &board, int row, int col, char dig)
    {
        // Horizontal Checking whether the digit can exist or not

        for(int j=0; j<9; j++)
        {
            if(board[row][j] == dig)
            {
                return false;
            }
        }

        // Vertical Checking whether the digit can exist or not

        for(int i=0; i<9; i++)
        {
            if(board[i][col]== dig)
            {
                return false;
            }
        }

        // Checking in Grid whether the digit exist or not

        int srow = (row/3)*3;
        int scol = (col/3)*3;

        for(int i=srow; i<=(srow+2); i++)
        {
            for(int j=scol; j<=(scol+2); j++)
            {
                if(board[i][j] == dig)
                {
                    return false;
                }
            }
        }

        return true;


    }

    bool sudokuSolver(vector<vector<char>> &board, int row, int col)
    {

        // Base Case jaba row=9 huncha

        if(row==9)
        {
            return true;
        }

        int nextRow = row;
        int nextCol = col+1;

        if(nextCol==9)
        {
            nextRow = row+1;
            nextCol = 0;
        }


        // If the cell is not empty then we will simply move to the new cell
        if(board[row][col] != '.')
        {
            return sudokuSolver(board, nextRow, nextCol);
        }

        // We will place the digits here

        for(int dig=1; dig<=9; dig++)
        {

            char ch ='0'+dig;
            if(isSafe(board, row, col, ch))
            {

                board[row][col] = ch;
                
                if(sudokuSolver(board, nextRow, nextCol))
                {
                    return true;
                }
                board[row][col] = '.';
            }
        }

        return false;
    }


    void solveSudoku(vector<vector<char>>& board) {

        sudokuSolver(board,0,0);
        
    }
};

int main()
{
    Solution s1;
    

     vector<vector<char>> board = {
        {'5','3','.','.','7','.','.','.','.'},
        {'6','.','.','1','9','5','.','.','.'},
        {'.','9','8','.','.','.','.','6','.'},
        {'8','.','.','.','6','.','.','.','3'},
        {'4','.','.','8','.','3','.','.','1'},
        {'7','.','.','.','2','.','.','.','6'},
        {'.','6','.','.','.','.','2','8','.'},
        {'.','.','.','4','1','9','.','.','5'},
        {'.','.','.','.','8','.','.','7','9'}
    };

    s1.solveSudoku(board);

    // Print solved board
    for(auto &row : board) {
        for(char c : row)
            cout << c << " ";
        cout << endl;
    }

}