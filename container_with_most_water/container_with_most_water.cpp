#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int size = 9;
    int height[size] = {1,2,6,1,1,4,7,3,7};

    int wd, ht;

    int area;

    int maxArea=INT_MIN;

    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            wd = j-i;
            ht = min(height[i],height[j]);

            area = wd*ht;

            if(area>maxArea)
            {
                maxArea = area;
            }

        }
    }

    cout<<"Maximum Water = "<<maxArea<<endl;
}