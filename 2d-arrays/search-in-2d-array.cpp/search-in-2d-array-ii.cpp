#include<iostream>
using namespace std;
int main()
{
    int m = 3, n = 3;
    int matrix[m][n] = {{1,2,3},{4,5,6},{7,8,9}};
    int tar = 9;

    int r = 0;
    int c = n-1;

    while(r<m && c>=0)
    {
        if(tar == matrix[r][c])
        {
            cout<<"True";
            return 0;
        }

        else if(tar<matrix[r][c])
        {
            c--;
        }
        else if(tar>matrix[r][c])
        {
            r++;
        }

        
    }
    cout<<"False";
}