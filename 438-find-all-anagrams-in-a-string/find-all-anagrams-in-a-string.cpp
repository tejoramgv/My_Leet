class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char,int>a;
        vector<int>v;
        int k=p.size();
        int n=s.size();
        for(char c:p)
        {
            a[c]++;
        }
        unordered_map<char,int>b;
        for(int i=0;i<k;i++)
        {
            b[s[i]]++;
        }
        if(a==b)
        {
            v.push_back(0);
        }
        b[s[0]]--;
        if(b[s[0]]==0)
        {
            b.erase(s[0]);
        }
        for(int i=k;i<n;i++)
        {
            b[s[i]]++;
            if(a==b)
            {
                v.push_back(i-k+1);
            }
            b[s[i-k+1]]--;
            if(b[s[i-k+1]]==0)
            {
                b.erase(s[i-k+1]);
            }
        }
        return v;
    }
};