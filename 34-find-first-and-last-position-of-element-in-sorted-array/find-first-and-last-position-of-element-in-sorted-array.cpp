class Solution {
public:
    vector<int> searchRange(vector<int>& v, int t) {
        int start=0;
        int end=v.size()-1;
        int first=-1;
        int last= -1;
        while(start<=end)
        {
            int mid=(start+end)/2;
            if(v[mid]>=t)
            {
                if(v[mid]==t)
                {
                    first=mid;
                }
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
        }
        if(first==-1)
        {
            return {-1,-1};
        }
        start=first;
        end=v.size()-1;
        while(start<=end)
        {
            int mid=start-(start-end)/2;
            if(v[mid]<=t)
            {
                if(v[mid]==t)
                {
                    last=mid;
                }
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
        return {first,last};
    }
};