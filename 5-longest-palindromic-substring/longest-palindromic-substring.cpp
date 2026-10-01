class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        int b=0;
        int len=1;
        for(int i=0;i<n;i++)
        {
            int j=i,k=i;
            while(j>=0 && k<n && s[j]==s[k])
            {
                if(k-j+1>len)
                {
                    len=k-j+1;
                    b=j;
                }
                j--;
                k++;
            }
            j=i;
            k=i+1;
            while(j>=0 && k<n && s[j]==s[k])
            {
                if(k-j+1>len)
                {
                    len=k-j+1;
                    b=j;
                }
                j--;
                k++;
            }
        }
        return s.substr(b,len);
    }
};