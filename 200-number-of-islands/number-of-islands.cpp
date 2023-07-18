class Solution {
public:
    void bfs(vector<vector<char>> &grid,map<int,map<int,int>>& m,int i,int j){
        int row=grid.size();
        int col=grid[0].size();
        m[i][j]=1;
        queue<pair<int,int>> q;
        q.push({i,j});
        while(!q.empty()){
            int r=q.front().first;
            int c=q.front().second;
            m[r][c]=1;
            q.pop();
            if(r+1<row){
                if(grid[r+1][c]=='1'&&m[r+1][c]!=1){
                    m[r+1][c]=1;
                    q.push({r+1,c});
                }
            }
            if(r-1>=0){
                 if(grid[r-1][c]=='1'&&m[r-1][c]!=1){
                     m[r-1][c]=1;
                    q.push({r-1,c});
                }
            }
            if(c+1<col){
                if(grid[r][c+1]=='1'&&m[r][c+1]!=1){
                    m[r][c+1]=1;
                    q.push({r,c+1});
                }
            }
            if(c-1>=0){
                 if(grid[r][c-1]=='1'&&m[r][c-1]!=1){
                     m[r][c-1]=1;
                    q.push({r,c-1});
                }
            } 
        }  
    }
    int numIslands(vector<vector<char>>& grid) {
        int count=0;
        map<int,map<int,int>> m;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
               if(m[i][j]!=1&&grid[i][j]=='1'){
                   bfs(grid,m,i,j);
                   count++;
               }
            }
        }
        return count;
    }
};