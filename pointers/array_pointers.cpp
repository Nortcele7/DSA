#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5};

    cout<<arr<<endl;
    cout<<*arr<<endl;

    cout<<*(arr+2)<<endl;

    int a = 10;

    arr = &a;
    
    cout<<arr<<endl;
    cout<<*arr<<endl;
}