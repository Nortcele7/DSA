#include<iostream>
using namespace std;

int main()
{
    int size = 4;
    int arr[size]={5,2,3,4};
    int newArr[size];

    int product=1;

    for(int i=0; i<size;i++)
    {
        product = product*arr[i];
    }

    int newproduct;

    for(int i=0;i<size;i++)
    {
        newproduct = product/arr[i];
        newArr[i] = newproduct;
        
        cout<<newArr[i]<<endl;
    }
}