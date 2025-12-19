#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string str = "dabcabc";
    string part = "abc";

    int position = str.find(part);

    str.erase(position, part.length());

    cout<<str;
}