class Solution { 
public:

    int nge(vector<int>& nums2, int j)
    {
        int n2 = nums2.size();

        vector<int>ans2 (n2);

        stack<int> st;

        for(int i = n2-1; i>=0; i--)
        {
            while(st.size()>0 && nums2[i]>=st.top())
            {
                st.pop();
            }
            if(st.empty())
            {
                ans2[i] = -1;
            }
            else
            {
                ans2[i]=st.top();
            }

            st.push(nums2[i]);
        }
        
        return ans2[j];
    }

    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();

        vector<int>ans(n1);
      


        stack<int> st;

        for(int i=0; i<n1; i++)
        {
            for(int j=0; j<n2; j++)
            {
                if(nums1[i]==nums2[j])
                {
                    ans[i] = nge(nums2, j);
                    break;
                }
            }
        }

        return ans;
    }
};