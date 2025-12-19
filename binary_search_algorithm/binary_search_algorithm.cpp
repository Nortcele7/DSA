#include<iostream>
using namespace std;
int main()
{
    int size = 5;
    int arr[size] = {1,2,3,4,5};
    int target = 1;

    int start= 0;
    int end = size-1;
    int mid;


    while(start<=end)
    {
        mid = (start+end)/2;

        if(arr[mid]==target)
        {
            cout<<mid<<endl;
            break;
        }
        if(arr[mid]<target)
        {
            start = mid+1;
        }
        if(arr[mid]>target)
        {
            end = mid-1;
        }
        
    }

}