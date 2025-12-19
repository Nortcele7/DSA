#include<iostream>
using namespace std;

int main()
{
    int arr[6] = {1,8,9,16,2,3};

    int lptr = 0;
    int rptr = (sizeof(arr)/sizeof(int))-1;
    int temp;


    while(lptr<rptr)
    {
        temp = arr[lptr];
        arr[lptr] = arr[rptr];
        arr[rptr] = temp;

        lptr++;
        rptr--;
    }

    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<endl;
    }
}