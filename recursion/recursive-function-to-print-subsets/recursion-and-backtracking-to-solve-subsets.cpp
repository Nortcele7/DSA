#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

void ps(vector<int> arr, vector<int> current, int index, vector<vector<int>>&ans)
{
    

    if(index == arr.size())
    {
        return ans.push_back(current);
    }

        // Including the element in the subset
        current.push_back(arr[index]);
        ps(arr, current, index+1, ans);

        // Excluding the element from the subset This is the backtracking step
        current.pop_back();
        ps(arr, current, index+1, ans);
}

int main()
{
    vector<vector<int>> ans;
    vector<int> arr = {1,2,2};
    vector<int> current;

    ps(arr, current, 0, ans);

    for(vector<int> x: ans)
    {
        cout<<"[";
        for(int y: x)
        {
            cout<<y<<",";
        }
        cout<<"]"<<endl;
    }
}