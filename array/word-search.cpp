class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m=board[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(func(board,i,j,n,m,word,0))
                    return true;
            }
        }
        return false;
    }
    bool func(vector<vector<char>>& board,int i,int j,int n,int m,string word,int pos)
    {
        if(i<0 || i>=n || j<0 || j>=m || board[i][j]!=word[pos])
            return false;
        if(pos==word.size()-1)
            return true;
        board[i][j]='#';
    if(func(board,i+1,j,n,m,word,pos+1)|| func(board,i-1,j,n,m,word,pos+1)|| func(board,i,j+1,n,m,word,pos+1)||func(board,i,j-1,n,m,word,pos+1))
            return true;
        board[i][j]=word[pos];
        return false;
            
    }
};