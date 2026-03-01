#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main()
{
    vector<int> ans;

    vector<int> prices = {100, 80, 60, 70, 60, 75, 85};
    int n = prices.size();

    stack<int> st;

    int span;

    

    for(int i=0; i<n; i++)
    {
        while(st.size()>0 && prices[st.top()]<=prices[i])
        {
            st.pop();
        }

        if(st.size()==0)
        {
            span = i+1;
            ans.push_back(span);

        }
        else{
            span = i-st.top();
            ans.push_back(span);
        }


        st.push(i);
        
    }

    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }

    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }

}