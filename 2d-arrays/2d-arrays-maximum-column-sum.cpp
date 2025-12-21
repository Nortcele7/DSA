#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int rows=3,cols=4;

    int matrix[rows][cols] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};

    int max=INT_MIN, sum, max_cols;

    for(int i=0; i<cols; i++)
    {
        sum = 0;
        for(int j=0; j<rows; j++)
        {
            sum = sum+matrix[j][i];
            if(sum>max)
            {
                max = sum;
                max_cols = i;
            }
        }
    }

    cout<<max<<endl;
    cout<<max_cols<<endl;
}