#include<iostream>
using namespace std;

int main()
{
    int size = 5;
    int arr[size] = {1,1,1,2,2};

    int maxCount = 0;

    int value = 0;
    for(int i=0;i<size;i++)
    {
        int count = 0;
        for(int j=0; j<size; j++)
        {
            if(arr[i]==arr[j])
            {
                count ++;
            }
        }
        // if(count>maxCount)
        // {
        //     maxCount = count;
        //     value = arr[i];
        // }

        if(count>(size/2))
        {
            value = arr[i];
        }
    }

    cout<<"Value: "<<value<<endl;



}