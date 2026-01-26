#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<utility>
using namespace std;
int main()
{
    vector<vector<int>> v1 = {{1,1,0},{1,0,1},{1,1,1}};
   

    int rows = v1.size();
    int columns = v1[0].size();

    vector<int> row_marker(rows, 0);
    vector<int> column_marker(columns, 0);

    
    // This will initialize the row marker and column marker according to the matrix
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++)
        {
            if(v1[i][j] == 0)
            {
                row_marker[i] = 1;
                column_marker[j] = 1;
            }

        }

    }


    // This will modify our matrix and modify the all the rows and columns corresponding to element that was 0 in the beginning
    
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++)
        {
            if(row_marker[i]==1 || column_marker[j]==1)
            {
                v1[i][j] = 0;
            }

        }

    }

    


    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++)
        {
            cout<<v1[i][j]<<" ";

        }
        cout<<endl;

    }



}