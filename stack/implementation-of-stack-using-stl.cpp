#include<iostream>
#include<stack>
using namespace std;

// This is implementation of stack using STL
// This implements all the basic functions of stack like push and pop
int main()
{
    stack<int> s1;

    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);

    s1.pop();

    while(!s1.empty())
    {
        cout<<s1.top()<<endl;
        s1.pop();
    }
}