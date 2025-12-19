#include<iostream>
using namespace std;
int main()
{
    int size = 9;
    int arr[9] = {1,1,2,2,3,3,4,4,8};

    int start=0;
    int end = size-1;

    int mid;

    while(start<=end)
    {
        mid = start + (end-start)/2;

        if(mid==0 && arr[mid]!=arr[mid+1])
        {
            cout<<arr[mid]<<endl;
            break;
        }

        if(mid==size-1 && arr[mid-1]!=arr[mid])
        {
            cout<<arr[mid]<<endl;
            break;
        }
        


        if(arr[mid-1]!=arr[mid] && arr[mid]!=arr[mid+1])
        {
            cout<<arr[mid]<<endl;
            break;
        }

        else
        {
            if(mid%2==0)
            {
                if(arr[mid-1]==arr[mid])
                {
                    // element is in left so we should decrease the search space to left side

                    end = mid-1;
                }
                else
                {
                    // element is in right so we should decrease the search space to right side

                    start = mid+1;
                }
            }

            else
            {
                if(arr[mid-1]==arr[mid])
                {
                    // element is in right so we should decrease the search space to right side

                    start = mid+1;

                }
                else
                {
                    // element is in left so we should decrease the search space to left side

                    end = mid-1;

                }
            }
        }
    }
}