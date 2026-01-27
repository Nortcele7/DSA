#include<iostream>
#include<unordered_set>
using namespace std;
int main()
{
    string s = "abcaa";

    unordered_set<char> st1;

    int n = s.size();

    int l = 0;
    int r = 0;

    int window_length = 0;
    int max_window_length = 0;





    while(r < n)
    {
        
        if(st1.find(s[r])==st1.end())
        {
            st1.insert(s[r]);
            r++;
        }

        else
        {
            st1.erase(s[l]);
            l++;
        }
        
        window_length = r-l;

        if(window_length>max_window_length)
        {
            max_window_length = window_length;
        }

    }

    cout<<max_window_length;
}