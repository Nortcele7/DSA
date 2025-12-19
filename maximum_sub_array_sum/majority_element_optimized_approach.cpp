#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector <int> v1 = {1,2,2,1,1,2,2}; 

    sort(v1.begin(), v1.end());

    int freq = 1;

    int ans = v1[0];

    for(int i=1;i<v1.size();i++)
    {
        if(v1[i]==v1[i-1])
        {
            freq++;
        }
        else
        {
            freq = 1;
            ans = v1[i];
        }

        if(freq > (v1.size()/2))
        {
            cout<<ans;
            break;
        }
    }
}