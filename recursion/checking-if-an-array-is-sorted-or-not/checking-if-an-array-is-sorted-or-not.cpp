#include<iostream>
using namespace std;
int check(int arr[], int n)
{
    if(n==0||n==1)
    {
        return 1;
    }
    else
    {
        if(arr[n]>=arr[n-1])
        {
            return 1 && check(arr,n-1);
        }
        else
        {
            return 0;
        }
    }

}
int main()
{
    int arr[5] = {1,2,3,4,5};

    if(check(arr,5))
    {
        cout<<"Array is Sorted";
    }
    else
    {
        cout<<"Array is not sorted";
    }
}