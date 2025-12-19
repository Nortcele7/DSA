#include<iostream>
#include<climits>
using namespace std;

int main()
{

    int size = 5;
    int arr[size] = {-5,-1,-3,-4,-5};

    int currentSum = 0;
    int maxSum = INT_MIN;


    for(int i=0; i<size;i++)
    {
        currentSum += arr[i];
        maxSum = max(currentSum, maxSum);

        if(currentSum<0)
        {
            currentSum=0;
        }
    }
    
    cout<<"Maximum Subarray Sum : "<<maxSum<<endl;

}