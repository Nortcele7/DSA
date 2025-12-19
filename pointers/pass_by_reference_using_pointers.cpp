#include<iostream>
using namespace std;

void doubleA(int &a)
{
    a = a*2;
}

int main()
{
    int a = 10;

    cout<<a<<endl;

    doubleA(a);

    cout<<a<<endl;

    return 0;
}