#include<iostream>
using namespace std;

int main()
{
    int size = 5;
    int marks[size];

    for(int i=0;i<size;i++)
    {
        cout<<"Enter the element:"<<endl;
        cin>>marks[i];
    }

    cout<<"The elements of array are: "<<endl;

    for(int i=0;i<size;i++)
    {
        cout<<marks[i]<<endl;
    }

}