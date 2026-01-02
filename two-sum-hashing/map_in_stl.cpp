#include<iostream>
#include<vector>
#include<map>
#include<utility>
using namespace std;
int main()
{
    vector<int> arr = {5,2,11,7,9};

    map<int,int> mp;

    mp.insert({5,0});
    mp.insert({6,1});
    mp.insert({7,2});

    for(auto it=mp.begin(); it!=mp.end(); it++)
    {
        cout<< it->first <<":" <<it->second <<endl;
    }

    int value = 5;

    auto it = mp.find(value);

    if(it!=mp.end())
    {
        cout<<"Key Found"<<endl;
        cout<<"Value: "<<it->second;
    }
    else
    {
        cout<<"Key Not Found";
    }

    pair<int,int> p;

    p ={10,4};

    

}