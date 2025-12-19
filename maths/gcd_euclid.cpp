#include<iostream>
using namespace std;
int main()
{
    int a = 20, b = 28;
    int gcd;

    while(a>0 && b>0)
    {
        if(a>b)
        {
            a = a%b;
        }
        else
        {
            b = b%a;
        }
    }

    if(a==0){
        gcd = b;
    }
    else if(b==0)
    {
        gcd = a;
    }

    int lcm = (a*b)/gcd;

    cout<<gcd<<endl;
    cout<<lcm<<endl;
}