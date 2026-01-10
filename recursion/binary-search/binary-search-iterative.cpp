#include<iostream>
using namespace std;
int main()
{
    int n = 5;
    int arr[n] = {1,2,3,4,5};
    int target = 4;

    int start = 0;
    int end = n-1;
    int mid;

    while(start<end)
    {
        mid = start + (end-start)/2;

        if(arr[mid]==target)
        {
            cout<<mid;
            break;
        }
        else if(arr[mid]<target)
        {
            start = mid+1;
        }
        else
        {
            end = mid-1;
        }
    }
}