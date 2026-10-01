class Solution {
public:
    bool ispali(string s,int j,int k)
    {
        int n=s.size();
        while(j<k)
        {
            if(s[j]!=s[k])
            {
                return 0;
            }
            j++;
            k--;
        }
        return 1;
    }
    bool validPalindrome(string s) {
        int n=s.size();
        int i=0;
        int k=n-1;
        while(i<k)
        {
            if(s[i]!=s[k])
            {
                return ispali(s,i+1,k) || ispali(s,i,k-1);
            }
            i++;
            k--;
        }
        return true;
    }
};