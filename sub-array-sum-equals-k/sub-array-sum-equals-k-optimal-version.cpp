#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr = {9,4,20,3,10,5};

    int target = 33;
    int n = arr.size(); 
    int start, end;
    int currentSum;
    int count=0;

    for(start=0; start<n; start++)
    {
        currentSum = 0;
        for(end=start; end<n; end++)
        {
            currentSum = currentSum + arr[end];
            if(currentSum == target)
            {
                count = count + 1;
            }
        }
    }

    cout<<count<<endl;

  
}