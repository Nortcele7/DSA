#include<iostream>
using namespace std;
int main()
{
    int rows=3,cols=3;

    // int matrix[rows][cols] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int matrix[rows][cols] = {{1,2,3},{4,5,6},{7,8,9}};

    int sum_prd=0;
    int sum_secd=0;

    for(int i=0; i<rows; i++)
    {
        sum_prd = sum_prd + matrix[i][i];

        if(i!=(rows-i-1))
        {
            sum_secd = sum_secd + matrix[i][rows-i-1];
        }
    }

    int sum = sum_prd + sum_secd;

    cout<<sum<<endl;
}