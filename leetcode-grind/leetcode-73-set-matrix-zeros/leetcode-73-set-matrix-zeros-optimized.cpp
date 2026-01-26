#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<utility>
using namespace std;
int main()
{
    vector<vector<int>> v1 = {{1,1,0},{1,0,1},{1,1,1}};
   
    set<int> row_marker;
    set<int> column_marker;

    int rows = v1.size();
    int columns = v1[0].size();

    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++)
        {
            if(v1[i][j] == 0)
            {
                row_marker.insert(i);
                column_marker.insert(j);
            }

        }

    }

    for(int r: row_marker)
    {
        for(int j=0; j<columns; j++)
        {
            v1[r][j] = 0;
        }
    }

    for(int c: column_marker)
    {
        for(int i=0; i<rows; i++)
        {
            v1[i][c] = 0;
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