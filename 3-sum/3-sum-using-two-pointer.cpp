#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> arr = {-1,-0,1,2,-1,-4};
    sort(arr.begin(), arr.end());

    vector<vector<int>> ans;

    int n = arr.size();

    for(int i=0;i<n;i++)
    {
        if(i>0 && arr[i]==arr[i-1])
        {
            continue;
        }

        // Duita extreme ends ma j ra k lai initialize garcham
        int j = i+1;
        int k = n-1;

        while(j<k)
        {
            int sum = arr[i]+arr[j]+arr[k];
            if(sum>0)
            {
                k--;   // Sum 0 bhanda thulo cha so sum lai ghatauna k lai ghatauchau 
            }
            if(sum<0)
            {
                j++; // Sum 0 bhanda sano cha so sum lai badhauna j lai badhauchau
            }
            if(sum==0)
            {

                ans.push_back({arr[i], arr[j], arr[k]});

                j++;
                k--;

                if(j<k && arr[j]==arr[j-1])
                {
                    j++;
                }
            }
        }
    }

    for(int i=0; i<ans.size(); i++)
    {
        cout<<"{";
        for(int j=0; j<ans[0].size(); j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<"}"<<endl;
    }

}