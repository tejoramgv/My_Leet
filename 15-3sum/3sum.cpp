class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& v) {
        int n=v.size();
        sort(v.begin(),v.end());
        vector<vector<int>>x;
        for(int i=0;i<n;i++)
        {
            if(i>0 && v[i]==v[i-1])
            {
                continue;
            }
            int j=i+1;
            int k=n-1;
            while(j<k)
            {
                int sum= v[i]+v[j]+v[k];
                if(sum>0)
                {
                    k--;
                }
                else if(sum<0)
                {
                    j++;
                }
                else
                {
                    x.push_back({v[i],v[j],v[k]});
                    j++;
                    while(v[j]==v[j-1] && j<k )
                    {
                        j++;
                    }
                }
            }
        }
        return x;
    }
};