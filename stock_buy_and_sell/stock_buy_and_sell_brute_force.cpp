#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int size = 5;
    int arr[size] = {7,6,4,3,1};

    int max = 0;
    int min = INT_MAX;
    int min_index = 0;
    int max_index = 0;

    for(int i=0;i<size;i++)
    {
        if(arr[i]<min)
        {
            min = arr[i];
            min_index = i;
        }
    }
    cout<<min<<endl;

    for(int j=min_index+1;j<size;j++)
    {
        if(arr[j]>max)
        {
            max = arr[j];
        }
    }

    int ans = max-min;

    if(max-min<0)

    {
        ans = 0;
    }


    cout<<"Profit: "<<ans;

}