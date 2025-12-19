#include<iostream>
using namespace std;


void doubleArray(int arr[], int size)
{
    for(int i=0; i<size;i++)
    {
        arr[i] = arr[i]*2;
    }
}

int main()
{
    int arr[3] = {1,2,3};

    for(int i=0;i<3;i++)
    {
        cout<<arr[i]<<endl;
    }

    cout<<endl;

    doubleArray(arr,3);

     for(int i=0;i<3;i++)
    {
        cout<<arr[i]<<endl;
    }
}