#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int size = 4;
    int arr[size]={5,2,3,4};
    vector<int> newArr(size,1);
    int suffix=1;

    for(int i=1;i<size;i++)
    {
        newArr[i] *= newArr[i-1]*arr[i-1];
    }

    for(int i=size-2;i>=0;i--)
    {
        suffix *= arr[i+1];
        newArr[i] *= suffix;
    }

    for(int i=0; i<size;i++)
    {
        cout<<newArr[i]<<endl;
    }
}
