#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int m = 3;
    int n = 5;

    vector<vector<int>> matrix = {
    {1,2,3,4,5},
    {6,7,8,9,10},
    {11,12,13,14,15}
};

    int srow = 0;
    int erow = m-1;

    int scol = 0;
    int ecol = n-1;

    while(srow<=erow && scol<=ecol)
    {
        // Top Boundary
        for(int j=scol; j<=ecol; j++)
        {
            cout<<matrix[srow][j]<<",";
        }

        // Right Boundary

        for(int j=srow+1; j<=erow; j++)
        {
            cout<<matrix[j][ecol]<<",";
        }

        // Bottom Boundary

        for(int j=ecol-1; j>=scol; j--)
        {
            if(srow==erow)
            {
                break;
            }
            cout<<matrix[erow][j]<<",";
        }

        // Left Boundary

        for(int j=erow-1; j>=srow+1; j--)
        {
            if(scol==ecol)
            {
                break;
            }
            cout<<matrix[j][scol]<<",";
        }

        srow++;
        scol++;

        erow--;
        ecol--;
    }
}