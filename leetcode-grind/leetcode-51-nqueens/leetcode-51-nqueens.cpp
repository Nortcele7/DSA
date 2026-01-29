#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:

    bool isSafe(vector<string> board, int row, int col, int n)
    {
         // Tyo row bhari aru queen cha ki nai bhanera check garne

         for(int j=0; j<n; j++)
         {
            if(board[row][j]=='Q')
            {
                return false;
            }
         }

         // Tyo column bhari aru queen cha ki nai bhanera check garne

         for(int i=0; i<n; i++)
         {
            if(board[i][col]=='Q')
            {
                return false;
            }
         }

         // Checking for left diagonal

         for(int i=row, j=col; i>=0 && j>=0; i--,j--)
         {
            if(board[i][j]=='Q')
            {
                return false;
            }
         }

         for(int i=row, j=col; i>=0 && j>=0; i--,j++)
         {
            if(board[i][j]=='Q')
            {
                return false;
            }
         }

         return true;
    }

    void nQueens(vector<string> &board, int row, int n , vector<vector<string>> &ans )

    {

        if(row==n)
        {
            ans.push_back({board});
            return;
        }


        for(int j=0; j<n; j++)
        {
            if(isSafe(board, row, j, n))
            {
                board[row][j] = 'Q';

                nQueens(board, row+1, n, ans);

                // Backtrack garera aayo bhane Q lai hatayera empty rakhne . symblolizes empty cells
                board[row][j] = '.';
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
          vector<string> board(n, string(n, '.'));
          vector<vector<string>> ans;
          
          nQueens(board, 0, n, ans);

          return ans;

    }
};

int main()
{
    Solution s1;
    
    vector<vector<string>> res = s1.solveNQueens(4);

    // Print solutions
    for(auto& sol : res) {
        for(auto& row : sol)
            cout << row << endl;
        cout << "----" << endl;
    }
}

