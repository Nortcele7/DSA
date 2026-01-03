#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> nums = {-1,0,1,2,-1,-4};

    vector<vector<int>> v1;

    set<vector<int>> s;

    int a,b,c;

    auto it = s.end();

    for(int i=0; i<nums.size(); i++)
    {
        for(int j=i+1; j<nums.size(); j++)
        {
            for(int k=j+1; k<nums.size(); k++)
            {

                a = nums[i];
                b = nums[j];
                c = nums[k];

                it = s.find({a,b,c});

                if(it == s.end())
                {

                    if(a+b+c == 0)
                    {
                        vector<int> triplet = {a,b,c}; 
                        sort(triplet.begin(), triplet.end());
                        s.insert(triplet);
                    }
            }
            }
        }
    }

for (auto triplet : s)
    {
        cout << "{ ";
        for (int val : triplet)
        {
            cout << val << ",";
        }
        cout << "}" << endl;
    }
}