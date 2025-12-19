#include<iostream>
#include<vector>
using namespace std;

bool isValid(vector<int> &arr, int n, int m, int mid)
{
    int st=1, pages=0;

    for(int i=0;i<n;i++)
    {

        if(arr[i]>mid)
        {
            return false;
        }

        if(pages+arr[i] <= mid)
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
    vector<int> arr = {2,1,3,4};
    int m = 2;

    int n = arr.size();

    int min = 0;
    int max = 0;

    for(int i=0;i<n;i++)
    {
        max += arr[i];
    }

    int ans = -1;

    int start = min;
    int end = max;
    int mid;

    while(start<=end)
    {
        mid = start + (end-start)/2;

        if(isValid(arr,n,m,mid))
        {
            // ans = mid;
            end = mid-1;
        }
        else
        {
            start = mid+1;
        }
    }

    cout<<mid<<endl;


}