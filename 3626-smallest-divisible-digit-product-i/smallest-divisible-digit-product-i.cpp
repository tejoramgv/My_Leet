class Solution {
public:
    int smallestNumber(int n, int t) {
        while(true)
        {
            int a=n;
            int prod=1;
            while(a>0)
            {
                prod*=(a%10);
                a/=10;
            }
            if(prod%t==0)
            {
                return n;
            }
            else
            {
                n++;
            }
        }
        return 0;
    }
};