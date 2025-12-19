// Dutch National Flag(DNF) Approach

#include<iostream>
#include<vector>
using namespace std;

int main()
{

    vector<int> arr = {2,0,2,1,1,0,1,2,0,0};
    int n =  arr.size();


    int mid = 0;
    int high = n-1;
    int low = 0;
    int temp;
    
    while(mid<=high)
    {
        if(arr[mid]==0)
        {
            temp = arr[low];
            arr[low] = arr[mid];
            arr[mid] = temp;

            low++;
            mid++;

            
        }

        else if(arr[mid]==1)
        {
            mid++;
        }

        
        else
        {
            temp = arr[mid];
            arr[mid] = arr[high];
            arr[high] = temp;

            high--;
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}