#include<iostream>
#include<vector>
using namespace std;


class Stack{
    
    public:
        vector<int> v;


        void push(int val)
        {
            v.push_back(val);

        }

        void pop()
        {
            v.pop_back();
        }

        int top()
        {
            return v[v.size()-1];
        }

        bool empty()
        {
            if (v.size() == 0)
            {
                return true;
            }
            else
            {
                return false;
            }
        }

        
};

int main()
{

    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    s.pop();

    cout<<s.empty()<<endl;


    int top_element = s.top();

    cout<<top_element<<endl<<endl;

    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
}