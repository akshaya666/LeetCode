class Solution {
public:
    int solve(int x,int y,string s)
    {
        if(s=="+")
            return x+y;
        if(s=="-")
            return y-x;
        if(s=="*")
            return y*x;
        return y/x;
    }
    bool isoperand(string s)
    {
        return s=="+" || s=="-" || s=="*" || s=="/";
    }
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(int i=0;i<tokens.size();i++)
        {
            if(isoperand(tokens[i]))
            {
                int x=st.top();
                st.pop();
                int y=st.top();
                st.pop();
                st.push(solve(x,y,tokens[i]));
                
            }
            else st.push(stoi(tokens[i]));
        }
        return st.top();
    }
};