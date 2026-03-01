#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
int main()
{
   

    vector<int> prices = {6,8,0,1,3};
    int n = prices.size();

    vector<int> ans(n);


    stack<int> st;

    for(int i=n-1; i>=0; i--)
    {
        while(st.size()>0 && prices[i]>=st.top())
        {
            st.pop();
        }


        if(st.empty())
        {
            ans[i] = -1;  // This will work for n-1 element too as for n-1 element the stack is empty 
        }
        else
        {
            ans[i] = st.top();
        }

        st.push(prices[i]);

    }

    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
}

