#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector <int> v1 = {1,2,2,1,1}; 

    int count = 0;
    int ans = 0;

    for(int i = 0; i<v1.size();i++)
    {
        if(count==0)
        {
            ans = v1[i];
        }

        if(ans == v1[i])
        {
            count ++;
        }
        else
        {
            count --;
        }
    }

    cout<<"Ans: "<<ans;

}
