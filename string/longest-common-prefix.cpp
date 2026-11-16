class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int minl=INT_MAX;
        for(auto x: strs)
        {
            if(minl>x.size())
                minl=x.size();
        }
        string ans="";
        char c;
        for(int i=0;i<minl;i++)
        {
            c=strs[0][i];
            for(int j=1;j<strs.size();j++)
                if(strs[j][i]!=c)
                    return ans;
            ans+=c;
        }
        return ans;
    }
};