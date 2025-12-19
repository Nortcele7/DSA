#include<iostream>
using namespace std;

int main()
{
    int marks[5];

    for(int i=0;i<5;i++)
    {
        cout<<"Enter the element: ";
        cin>>marks[i];
    }

    int smallest = marks[0];
    int largest = marks[0];
    int idx_smallest = 0;
    int idx_largest = 0;

    for(int i=0;i<5;i++)
    {
        if(marks[i]<smallest)
        {
            smallest = marks[i];
            idx_smallest = i;
        }
        else if(marks[i]>largest)
        {
            largest = marks[i];
            idx_largest = i; 
        }
    }

    cout<<"Smallest: "<<smallest<<endl;
    cout<<"Largest: "<<largest<<endl;

    cout<<"Index of Smallest: "<<idx_smallest<<endl;
    cout<<"Index of Largest: "<<idx_largest<<endl;
}
