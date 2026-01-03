#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr = {9,4,20,3,10,5};

    int target = 33;
    int n = arr.size();
    int sum;
    int count = 0;

    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            sum = 0; // Every subarray ko lagi sum = 0 banaune
            for(int k=i; k<=j ; k++)
            {
                sum+= arr[k];
            }
            if(sum==target) // Every sub array ko sum target sanga compare garni if equal cha bhaen count lai badhaune
            {
                count++;   
            }
        }
        
    }

    cout<<count<<endl;
}