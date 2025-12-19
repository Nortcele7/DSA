#include<iostream>
#include<algorithm>
using namespace std;
 
int main()
{
    string str = "hello world";
    string word;
    string newStr = "";

    reverse(str.begin(), str.end());

    for(int i=0;i<str.length();i++)
    {
        word = "";
        while(i<str.length() && str[i]!=' ')
        {
            word += str[i]; 
            i++;
        }
        reverse(word.begin(), word.end());
        newStr += " " + word;
    }

    cout<<newStr;
}