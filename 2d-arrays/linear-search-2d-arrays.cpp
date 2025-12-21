#include<iostream>
using namespace std;
int main()
{
    int rows=3,cols=4;

    int matrix[rows][cols] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};

    int key = 10;

    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            if(matrix[i][j]==key)
            {
                cout<<i<<" "<<j;
            }
        }
    }
    
}