#include<iostream>
using namespace std;
int main()
{
    int a = 12, b = 24;
    int i;
    int hcf = 1;
    for(i=1;i<=min(a,b);i++)
    {
        if(a%i==0 && b%i==0)
        {
            hcf = i;
        }
    }

    cout<<hcf;
}