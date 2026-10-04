#include <cmath>
class Solution {
public:
    int mySqrt(int x) {
        int i=0;
        int j=x;
        while(i<=j)
        {
            int mid= (j+i)/2;
            long long m= (long long) mid;
            long long n= (long long) x;
            if(m*m == x)
            {
                return mid; 
            }
            else if(m*m > x)
            {
                j= mid-1;
            }
            else
            {
                i= mid+1;
            }
        }
        return j;
    }
};