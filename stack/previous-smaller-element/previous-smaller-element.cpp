#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main()
{
    vector<int> arr = {3,1,0,8,6};

    int n = arr.size();

    stack<int> st;

    vector<int> ans(n);

    for(int i=0; i<n; i++)
    {
        while(st.size() && st.top()>=arr[i])
        {
            st.pop();
        }

        if(st.empty())
        {
            ans[i] = -1;
        }
        else
        {
            ans[i] = st.top();
        }

        st.push(arr[i]);
    }

    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }

}