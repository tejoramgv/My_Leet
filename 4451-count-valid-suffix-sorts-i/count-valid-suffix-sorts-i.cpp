class Solution {
public:
    int countSuffix(vector<int>& n, vector<int>& t) {
        int start=0;
        int s=0;
        int count=0;
        int m=n.size();
        while(start<m && n[start]==t[start])
        {
            start++;
        }
        vector<int>v(n.begin()+start,n.end());
        sort(v.begin(),v.end(),greater<int>());
        vector<int>temp(t.begin()+start,t.end());
        
        if(v!= temp)
        {
            return 0;
        }
        count++;
        if(start==m)
        {
            count=1;
            for(int i=m-1;i>0;i--)
            {
                if(n[i]<=n[i-1])
                {
                    count++;
                }
                else{
                    break;
                }
            }
            return count;
        }
        s=start-1;
        int mx=v[0];
        while(s>=0 && n[s]==t[s] && n[s]>=mx )
        {
            count++;
            mx=n[s];
            s--;
        }
        return count;
    }
};