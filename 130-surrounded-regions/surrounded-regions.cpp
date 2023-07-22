class Solution {
public:
   void dfs(vector<vector<char>> &board,int i,int j,int m,int n){
    board[i][j]='*';
    vector<int> d={0,1,0,-1,0};
    for(int k=0;k<4;k++){
        int r=i+d[k];
        int c=j+d[k+1];
        if(r>=0&&c>=0&&c<n&&r<m){
            if(board[r][c]=='O'){
                dfs(board,r,c,m,n);
            }
        }
    }

   }


    void solve(vector<vector<char>>& board) {
        int m=board.size();
        int n=board[0].size();

        for(int i=0;i<m;i++){
            if(board[i][0]=='O'){
                dfs(board,i,0,m,n);
            }
            if(board[i][n-1]=='O'){
                dfs(board,i,n-1,m,n);
            }
        }
        for(int i=0;i<n;i++){
            if(board[0][i]=='O'){
                dfs(board,0,i,m,n);
            }
            if(board[m-1][i]=='O'){
                dfs(board,m-1,i,m,n);
            }
        }
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]=='O'){
                    board[i][j]='X';
                }
                else if(board[i][j]=='*'){
                    board[i][j]='O';
                }
            }
        }

    }
};