#include<iostream>
using namespace std;

bool isValid(int arr[], int n, int m, int mid)
{
    int st=1, pages=0;
    for(int i=0; i<n ; i++)
    {
        if(arr[i]>mid)
        {
            return false;
        }
        if(pages+arr[i]<=mid)
        {
            pages+=arr[i];
        }
        else
        {
            st++;
            pages=arr[i];
        }
    }

    if(st>m)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int size=4;
    int arr[size] = {40,30,10,20};

    int m = 2;

    int n = size;

    int min = 0;
    int max = 0;


    for(int i=0;i<n;i++)
    {
        max += arr[i];
    }

    int start = min;
    int end = max;

    int mid;

    while(start<=end)
    {

        mid = start + (end-start)/2;


        if(isValid(arr,n,m,mid))
        {
            end = mid-1;
        }
        else
        {
            start = mid+1;
        }



    }

    cout<<mid<<endl;
}