#include<iostream>
using namespace std;

void print_num(int n)
{
    if(n==1)
    {
        cout<<1<<endl; 
    }
    else
    {
        cout<<n<<endl;
        print_num(n-1);
    }
}


int main()
{
    print_num(5);
}