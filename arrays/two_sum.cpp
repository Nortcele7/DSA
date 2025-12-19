#include<iostream>
using namespace std;

void twosum(int arr[], int size, int target)
{
    int lptr = 0;
    int rptr = size-1;

    while(lptr<rptr)
    {
        if((arr[lptr]+arr[rptr])<target)
        {
            lptr++;
        }
        else if((arr[lptr]+arr[rptr])>target)
        {
            rptr--;
        }
        else if((arr[lptr]+arr[rptr])==target)
        {
            cout<<"Index: "<<lptr<<" "<<rptr;
            return;
        }
    }
    cout<<"Not Found";
}

int main()
{
    int arr[5]={1,2,7,8,9};

    int target = 15;

    twosum(arr, 5, target);


} 