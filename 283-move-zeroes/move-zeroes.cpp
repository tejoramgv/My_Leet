class Solution {
public:
    void moveZeroes(vector<int>& v) {
        int n=v.size();
        int j=0;
        for(int i=0;i<n;i++)
        {
            if(v[j]==0)
            {
                v.erase(v.begin()+j);
                v.push_back(0);
            }
            else
            {
                j++;
            }
        }
    }
};