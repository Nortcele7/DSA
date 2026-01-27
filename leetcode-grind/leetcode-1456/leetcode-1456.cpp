#include<iostream>
#include<unordered_set>
using namespace std; 


class Solution {
public:
    int maxVowels(string s, int k) {
        unordered_set<char> st1 = {'a','e','i','o','u'};


        int l = 0;
        int r = k-1;

        int n = s.size();
        int count=0;
        int max_count=0;

        for(int i=l; i<=r; i++)
        {
            if(st1.find(s[i])!=st1.end())
            {
                count++;
            }
        }

        max_count = count;

        while(r<n)
        {
            r++;
            if(st1.find(s[r])!=st1.end())
            {
                count++;
            }           

            if(st1.find(s[l])!=st1.end())
            {
                count--;
            }
            l++;

            max_count = max(max_count, count);

        }

        return max_count;
    }
};

int main()
{
  
    Solution s1;

    cout<<s1.maxVowels("abcaaa", 3);


}

