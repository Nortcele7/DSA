#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main()
{
    vector<vector<int>>arr = {{9,1,7},{8,9,2},{3,4,6}};

    set<int> s;

    int rows = arr.size();
    int columns = arr[0].size();

    auto it = s.end();

    int a;

    int expectedSum = ((rows*rows)*((rows*rows)+1))/2, actualSum = 0;

    for(int i=0;i<rows;i++)
    {
        for(int j=0; j<rows; j++)
        {

            actualSum += arr[i][j];

            it = s.find(arr[i][j]);
            if(it==s.end())
            {
                s.insert(arr[i][j]);
            }
            
            else
            {
                a=arr[i][j];
            }
        }
    }

    int b;

    b = expectedSum-actualSum+a;
    

    cout<<"a = "<<a; 
    cout<<"b = "<<b;
}