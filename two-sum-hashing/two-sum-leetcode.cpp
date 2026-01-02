class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        int first, second;
        map<int,int> mp;
        vector<int> v1;

        for(int i=0; i<n; i++)
        {
            first = nums[i];
            second = target-first;

            auto it = mp.find(second);

            if(it==mp.end())
            {
                mp.insert({first, i});
            }
            else
            {
                v1.push_back(i);
                v1.push_back(it->second);
            }
        }
        return v1;
    }
};