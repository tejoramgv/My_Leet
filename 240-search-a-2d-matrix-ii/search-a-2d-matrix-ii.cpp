class Solution {
public:
    bool searchMatrix(vector<vector<int>>& v, int t) {
        int n=v.size();
        int start=0;
        int end=n-1;
        int mid=0;
        int x=-1;
        while(start<=end)
        {
            mid = start + (end - start)/2;
            if(v[mid][0]==t)
            {
                return true;
            }
            else if(v[mid][0]>t)
            {
                end=mid-1;
            }
            else
            {
                x=mid;
                start=mid+1;
            }
        }
        if (x == -1)
            return false;
        for(int i=0;i<=mid;i++)
        {
            start=0;
            end=v[0].size()-1;
            while(start<=end)
            {
                int mid1 = start + (end - start)/2;
                if(v[i][mid1]==t)
                {
                    return true;
                }
                else if(v[i][mid1]>t)
                {
                    end=mid1-1;
                }
                else
                {
                    start=mid1+1;
                }
            }
        }
        return false;
    }
};