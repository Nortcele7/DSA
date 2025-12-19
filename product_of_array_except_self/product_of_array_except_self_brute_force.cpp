#include<iostream>
using namespace std;

int main()
{
    int size = 4;
    int arr[size]={5,2,3,4};
    int newArr[size];

    int product;

    for(int i=0; i<size;i++)
    {
        product=1;
        for(int j=0;j<size;j++)
        {
            if(i!=j)
            {
                product = product*arr[j];
            }
        }
        newArr[i] = product;
    }

    for(int i=0;i<size;i++)
    {
        cout<<newArr[i]<<endl;
    }
}