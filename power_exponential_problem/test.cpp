#include<iostream>
using namespace std;

int main()
{
    double x = 2;
    int pow = -2;
    double ans = 1;
    double last_digit;

    if(pow<0)
    {
        pow = abs(pow);
        x = (1/x);
    }
    

    while(pow>0)
    {
        last_digit = pow % 2;

        if(last_digit!=0)
        {
            ans = ans*x;
        }

        x = x*x;
        pow = pow/2;
    }

    cout<<"Ans: "<<ans;
}