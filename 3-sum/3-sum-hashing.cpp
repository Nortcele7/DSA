#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> arr = {-1,0,1,2,-1,-4};
    set<vector<int>> s;

    int a,b,c;
    int target;
    auto it = s.end();

    for(int i=0; i<arr.size(); i++)
    {
        a = arr[i];
        target = -a;
        for(int j=i+1; j<arr.size(); j++)
        {
            b = arr[j];

            c = target - b;

            auto it1 = find(arr.begin()+j+1, arr.end(), c); // c chai a ra b sanga match nahos ra collide nagaros bhanera use garincha

            if(it1 != arr.end())
            {

                it = s.find({a,b,c});

                if(it==s.end())
                {
                    vector<int> triplet = {a,b,c};
                    sort(triplet.begin(), triplet.end());
                    s.insert(triplet);
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
