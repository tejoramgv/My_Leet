class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s1.size();
        int m=s2.size();
        if(m<n)
        {
            return false;
        }
        unordered_map<char,int>a;
        unordered_map<char,int>b;
        for(char c:s1)
        {
            a[c]++;
        }
        for(int i=0;i<n;i++)
        {
            b[s2[i]]++;
        }
        if(a==b)
        {
            return true;
        }
        b[s2[0]]--;
        if(b[s2[0]]==0)
        {
            b.erase(s2[0]);
        }
        for(int i=n;i<m;i++)
        {
            b[s2[i]]++;
            if(a==b)
            {
                return true;
            }
            b[s2[i-n+1]]--;
            if(b[s2[i-n+1]]==0)
            {
                b.erase(s2[i-n+1]);
            }
        }
        return false;
    }
};