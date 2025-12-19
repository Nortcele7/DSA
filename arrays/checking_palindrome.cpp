#include<iostream>
using namespace std;

int main()
{
    int arr[6] = {1,2,3,3,2,1};

    int lptr = 0;
    int rptr = (sizeof(arr)/sizeof(int))-1;
    int c = 0;


    while(lptr<rptr)
    {
        if(arr[lptr]!=arr[rptr])
        {
            c++;
        }  
        lptr++;
        rptr--;
    }

    if(c>0)
    {
        cout<<"Not Palindrome";
    }
    else
    {
        cout<<"Palindrome";
    }
}