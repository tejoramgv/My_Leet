class Solution {
public:
    vector<vector<string>> findMismatchedSegments(string s1, string s2) {
        vector<vector<string>> v;
        int n=s1.size();
        int start=0;
        int end=0;
        while(end<n)
        {
            if(s1[end]==s2[end])
            {
                if(start<end)
                {
                v.push_back({s1.substr(start,end-start),s2.substr(start,end-start)});
                }
                start=end+1;
            }
            end++;
        }
        if(start<n)
        {
            v.push_back({s1.substr(start,n-start),s2.substr(start,n-start)});
        }
        return v;
    }
};