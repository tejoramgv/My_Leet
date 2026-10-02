class Solution {
public:
    int countSubstrings(string s) {
        int count=0;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            int j=i;
            int k=i;
            while(j>=0 && k<n && s[j]==s[k])
            {
                count++;
                j--;
                k++;
            }
            j=i;
            k=i+1;
            while(j>=0 && k<n && s[j]==s[k])
            {
                count++;
                j--;
                k++;
            }
        }
        return count;
    }
};