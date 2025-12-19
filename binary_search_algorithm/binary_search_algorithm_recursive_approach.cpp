#include<iostream>
using namespace std;

int binarySearch(int arr[], int target, int start, int end)
{
    int mid = start + (end-start)/2;

    if(start>end)
    {
        return -1;
    }

    else if(arr[mid]==target)
    {
        return mid;
    }

    else if(target>arr[mid])
    {
        return binarySearch(arr, target, mid+1, end);
    }

    else if(target<arr[mid])
    {
        return binarySearch(arr, target, start, mid-1);
        
    }


}

int main()
{
    int size = 5;
    int arr[size] = {1,2,3,4,5};
    int target = 4;
    int start = 0;
    int end = size-1;

    cout<<binarySearch(arr, target, start, end);

}