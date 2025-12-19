#include<iostream>
using namespace std;
int main()
{

    int a=10;

    // int *p;
    // p = &a;

    int* p = &a;

    cout<<p<<endl;
    p++;
    cout<<p<<endl;
    p++;
    cout<<p<<endl;
    p++;
    cout<<p<<endl;
    p++;
    cout<<p<<endl;
    p++;
    cout<<p<<endl;
    p++;
    cout<<p<<endl;
    p++;
    cout<<p<<endl;


    p--;
    cout<<p<<endl;

    p = p+3;

    cout<<p<<endl;

    int *ptr = &a;
    int *ptr2 = ptr+3;

    cout<<ptr2-ptr<<endl;
    cout<<(ptr2>ptr)<<endl;
    cout<<(ptr2<ptr)<<endl;
    cout<<(ptr2!=ptr)<<endl;




}