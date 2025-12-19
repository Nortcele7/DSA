#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> nums = {0,3,8,9,5,2};

    int start = 1;
    int end = nums.size()-2;
    int peak;

    while(start<=end)
    {
        peak = start + (end-start)/2;

        if(nums[peak]>nums[peak-1] && nums[peak]>nums[peak+1])
        {
            cout<<peak<<endl;
            break;
        }

        if(nums[peak]<nums[peak+1])
        {
            start = peak+1;
        }

        else
        {
            end = peak-1;
        }
        }
    

}