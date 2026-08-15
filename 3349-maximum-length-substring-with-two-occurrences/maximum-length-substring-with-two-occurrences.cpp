class Solution {
public:
    int maximumLengthSubstring(string s) {
        vector<int>v(26,0);
        int i=0;
        int n=s.size();
        int maxi=0;
        for(int j=0;j<n;j++)
        {
            v[s[j]-'a']++;
            while(v[s[j]-'a']>2)
            {
                v[s[i]-'a']--;
                i++;
            }
            maxi=max(maxi,j-i+1);
        }
        return maxi;
    }
};