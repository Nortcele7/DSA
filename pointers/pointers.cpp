#include<iostream>
using namespace std;

int main()
{
    int a = 10;
    int* ptr = &a;

    int* q = NULL;
    // cout<<a<<endl;
    // cout<<&a<<endl;
    // cout<<ptr<<endl;
    // cout<< *ptr<<endl;
    // cout<<&ptr<<endl;

    int** ptr2 = &ptr;

    cout<<ptr2<<endl;
    cout<<&ptr<<endl;
    cout<<*ptr2<<endl;
    cout<<&a<<endl;
    cout<<**ptr2<<endl;
    cout<<a<<endl;

    cout<<q<<endl;
    cout<<*q<<endl;
    
}