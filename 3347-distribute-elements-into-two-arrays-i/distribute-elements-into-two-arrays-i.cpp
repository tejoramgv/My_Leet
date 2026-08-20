class Solution {
public:
    vector<int> resultArray(vector<int>& v) {
        vector<int>a;
        vector<int>b;
        a.push_back(v[0]);
        b.push_back(v[1]);
        int n=v.size();
        for(int i=2;i<n;i++)
        {
            if(*(a.end()-1)>*(b.end()-1))
            {
                a.push_back(v[i]);
            }
            else
            {
                b.push_back(v[i]);
            }
        }
        a.insert(a.end(), b.begin(), b.end());
        return a;
    }
};