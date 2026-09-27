class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i]<='Z' && s[i]>='A')
            {
                s[i]=s[i]+32;
            }
            else if((s[i]<='z'&&s[i]>='a')||(s[i]<='9'&&s[i]>='0'))
            {
                continue;
            }
            else
            {
                s.erase(s.begin()+i);
                i--;
                n--;
            }
            
        }
        for(int i=0;i<n/2;i++)
            {
                if(s[i]!=s[n-i-1])
                {
                    return 0;
                }
            }
        return 1;
    }
};