#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int size = 9;
    int height[size] = {1,8,6,2,5,4,8,3,7};

    int wd, ht;

    int area;

    int maxArea=0;

    int lptr=0;
    int rptr = size-1;


    while(lptr<rptr)
    {
        wd = rptr-lptr;
        ht = min(height[lptr], height[rptr]);
        area = wd*ht;

        if(area>maxArea)
        {
            maxArea = area;
        }

        if(height[lptr]<height[rptr])
        {
            lptr++;
        }
        else
        {
            rptr--;
        }


    }

    cout<<maxArea<<endl;
}