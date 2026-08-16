class Solution {
public:
    int maxArea(vector<int>& v) {
        int maxi=0;
        int i=0;
        int j=v.size()-1;
        while(i<j)
        {
            int a=min(v[i],v[j]);
            maxi=max(maxi, a*(j-i));
            if(v[i]>v[j])
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        return maxi;
    }
};