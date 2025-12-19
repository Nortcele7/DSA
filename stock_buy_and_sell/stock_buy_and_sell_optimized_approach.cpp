#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int size = 5;
    int arr[size] = {7,6,4,3,1};

    int best_buy = arr[0];
    int maxProfit = 0;
    int profit;

    for(int i=0;i<size;i++)
    {
        if(arr[i]<best_buy)
        {
            best_buy = arr[i];
        }

        profit = arr[i]-best_buy;
        
        if(profit>maxProfit)
        {
            maxProfit = profit;
        }
    }

    cout<<"Max Profit: "<<maxProfit<<endl;
}