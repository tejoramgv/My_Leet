class Solution {
public:
    int maxProduct(vector<int>& v) {
        long long res=v[0];
        long long pre=v[0];
        long long ans=v[0];
        for(int i=1;i<v.size();i++)
        {
            long long x=v[i];

            if(x<0)
            {
                swap(res,pre);
            }
            res=max(x,res*x);
            pre=min(x,pre*x);
            ans=max(ans,res);
        }
        return (int)ans;
    }
};