#include<iostream>
using namespace std;

int linear_search(int arr[], int size, int target)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[3]={1,2,3};

    cout<<linear_search(arr, 3, 3);
}