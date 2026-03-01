#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main()
{
    vector<int> heights = {2,1,5,6,2,3};

    int n = heights.size();
    
    int ans = 0;

    int width;

    stack<int> st1;
    stack<int> st2;

    vector<int> ans1(n);
    vector<int> ans2(n);


    for(int i=n-1; i>=0; i--)
    {
        while(st2.size()>0 && heights[st2.top()]>=heights[i])
        {
            st2.pop();
        }


        if(st2.empty())
        {
            ans2[i] = n;   // To match with the width formula
        }
        else
        {
            ans2[i] = st2.top();
        }

        st2.push(i);

    }


    for(int i=0; i<n; i++)
    {
        while(st1.size()>0 && heights[st1.top()]>=heights[i])
        {
            st1.pop();
        }


        if(st1.empty())
        {
            ans1[i] = -1;  
        }
        else
        {
            ans1[i] = st1.top();
        }

        st1.push(i);

    }



    
    

    for(int i=0; i<heights.size(); i++)
    {
        width = ans2[i]-ans1[i]-1;
        int currArea = heights[i]*width;
        ans =  max(ans, currArea);
    }

    cout<<ans;
    
}