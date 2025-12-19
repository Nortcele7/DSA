#include<iostream>
using namespace std;
int main()
{
    int size = 8; 
    int arr[size] = {3,4,5,6,7,0,1,2};
    int target = 1;
    
    int start = 0;
    int end = size-1;
    int mid;

    while(start<=end)
    {
        mid = start + (end-start)/2;
        if(arr[mid]==target)
        {
            cout<<mid<<endl;
            break;
        }
        else
        {
            if(arr[start]<=arr[mid])
            {
                // LH is sorted
                if(arr[start]<= target && target<=arr[mid])
                {
                    // Target is in LH
                    end = mid-1;
                }
                else
                {
                    start = mid+1;
                }
            }
            else
            {
                // RH is sorted
                if(arr[mid]<= target && target<=arr[end])
                {
                    // Target is in RH
                    start=mid+1;
                }
                else
                {
                    // Target is in LH
                    end = mid-1;
                }
            }
        }
    }
    
}