#include<iostream>
using namespace std;
int check(int arr[], int n, int start, int end, int target)
{

    int mid = start + (end-start)/2;

    if(start>end)
    {
        return -1;
    }

    if(arr[mid]==target)
    {
        return mid;
    }
    else if(arr[mid]>target)
    {
        return check(arr,n,start,mid-1,target);
    }
    else if(arr[mid]<target)
    {
        return check(arr,n, mid+1, end, target);
    }
    return -1;

}
int main()
{
    int n = 5;
    int arr[n] = {1,2,3,4,5};
    int target = 5;

    int index = check(arr,n,0,n-1,target);

    cout<<index<<endl;

     
}