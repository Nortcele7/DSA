#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v1={1,2,3,4};

    cout<<v1[2]<<endl;

    cout<<"Size: "<<v1.size()<<endl;

    v1.push_back(100);
    cout<<"Size: "<<v1.size()<<endl;

    v1.pop_back();
    for(int i: v1)
    {
        cout<<i<<endl;
    }
    

    cout<<v1.front()<<endl;

    cout<<v1.at(0)<<endl;

}