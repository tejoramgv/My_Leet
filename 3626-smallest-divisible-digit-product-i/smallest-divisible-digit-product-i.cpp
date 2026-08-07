class Solution {
public:
    int smallestNumber(int n, int t) {
        int a = n;
        while (true) {
            int x = a;
            int product = 1;
            
            while (x > 0) {
                product *= x % 10;
                x /= 10;
            }

            if (product % t == 0) {
                return a;
            }

            a += 1;
        }
    }
};