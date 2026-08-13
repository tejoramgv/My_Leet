class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& v, int target) {
        int n=v.size();
        vector<vector<int>>x;
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++)
        {
            if(i>0 && v[i]==v[i-1])
            {
                continue;
            }
            for(int j=i+1;j<n;j++)
            {
                if(j>i+1 && v[j]==v[j-1])
                {
                    continue;
                }
                int k=j+1;
                int l=n-1;
                while(k<l)
                {
                    long long sum= (long long)v[i]+v[j]+v[k]+v[l];
                    if(sum== target)
                    {
                        x.push_back({v[i],v[j],v[k],v[l]});
                        k++;
                        while(v[k]==v[k-1] && k<l)
                        {
                            k++;
                        }
                        l--;
                        while(v[l]==v[l+1] && l>k)
                        {
                            l--;
                        }
                    }
                    else if(sum>target)
                    {
                        l--;
                        while(v[l]==v[l+1] && l>k)
                        {
                            l--;
                        }
                    }
                    else
                    {
                        k++;
                        while(v[k]==v[k-1] && k<l)
                        {
                            k++;
                        }
                    }
                }
            }
        }
        return x;
    }
};