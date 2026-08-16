class Solution {
public:
    int maxSubArray(vector<int>& v) {
        int maxi=-99999;
        int c=0;
        for(int i:v)
        {
            if(c<0)
            {
                c=0;
            }
            c+=i;
            maxi=max(maxi,c);
        }
        return maxi;
    }
};