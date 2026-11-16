class Solution {
public:
    vector<vector<string>> ans;
    vector<vector<string>> partition(string s) {
        vector<string> curl;
        dfs(curl,s,0);
        return ans;
    }
    bool ispal(string s,int s1,int e)
    {
        while(s1<e)
        {
            if(s[s1++]!=s[e--])
                return false;
        }
        return true;
    }
    void dfs(vector<string>& curl,string& s,int start)
    {
        if(start>=s.length())
        {
            ans.push_back(curl);
            return;
        }
        for(int i=start;i<s.size();i++)
        {
            if(ispal(s,start,i))
            {
                curl.push_back(s.substr(start,i-start+1));
                dfs(curl,s,i+1);
                curl.pop_back();
            }
        }
    }
};