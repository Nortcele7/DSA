#include<iostream>
using namespace std;

int main()
{
    int size = 4;
    int arr[size]={5,2,3,4};
    int newArr[size], prefix[size], suffix[size];

    prefix[0] = 1;
    suffix[size-1] = 1;

    for(int i=1;i<size;i++)
    {
        prefix[i] = prefix[i-1]*arr[i-1];
    }

    for(int i=size-2;i>=0;i--)
    {
        suffix[i] = suffix[i+1]*arr[i+1];
    }

    for(int i=0; i<size;i++)
    {
        newArr[i] = prefix[i]*suffix[i];
    }

    for(int i=0; i<size;i++)
    {
        cout<<newArr[i]<<endl;
    }
}
