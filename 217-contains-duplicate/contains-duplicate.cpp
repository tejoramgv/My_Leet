class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int i:nums)
        {
            m[i]++;
        }
        for(pair<int,int>j:m)
        {
            if(j.second>=2)
            {
                return true;
            }
        }
        return false;
    }
};