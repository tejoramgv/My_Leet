class Solution {
public:
    void rotate(vector<int>& v, int k) 
    {
        int n=v.size();
        k=k%n;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            a[i]=v[(i+n-k)%n];
        }
        for(int i=0;i<n;i++)
        {
            v[i]=a[i];
        }
        
    }
};