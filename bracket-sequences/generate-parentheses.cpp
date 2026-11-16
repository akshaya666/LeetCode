class Solution {
public:
    vector<string> ans;
    vector<string> generateParenthesis(int n) {
        string cur="";
        int open=0;
        int close=0;
        bt(cur,open,close,n);
        return ans;
    }
    void bt(string& cur,int open,int close,int n)
    {
        if(cur.size()==2*n)
        {
            ans.push_back(cur);
            return ;
        }
        if(open<n)
        {
            cur.push_back('(');
            bt(cur,open+1,close,n);
            cur.pop_back();
        }
        if(close<open)
        {
            cur.push_back(')');
            bt(cur,open,close+1,n);
            cur.pop_back();
        }
    }
};