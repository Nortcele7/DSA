#include<iostream>
using namespace std;

int main()
{
    // char arr[] = "Shreyam";

    string arr = "Shreyam";

    for(char &  c: arr)
    {
        c = toupper(c);
    }

    int start = 0;
    int end = 6;
    char temp;

    while(start<end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    cout<<arr;
}