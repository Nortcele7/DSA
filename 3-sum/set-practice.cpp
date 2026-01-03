#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main()
{
    vector<int> nums = {-1,0,1,2,-1,-4};

    set<set<int>> s;

    s.insert({1,2,3});
    s.insert({4,5,6});

    vector<vector<int>> v;

    auto it = s.find({1,2,4});

    v.push_back({4,4,4});
    v.push_back({3,4,3});

    auto it1  = v.count({4,4,4});
   
    if(it1!=0)
    {
        cout<<"Found";
    }

}