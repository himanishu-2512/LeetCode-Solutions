class Solution {
public:
    int  bfs(vector<vector<int>> &grid,queue<pair<int,int>> &q){
    int count=0;
    int row=grid.size();
    int col=grid[0].size();
    map<int,map<int,int>> m;
    while(!q.empty()){
        int size=q.size();
        
        for(int i=0;i<size;i++){
            int r=q.front().first;
            int c=q.front().second;
            q.pop();
            if(r+1<row){
                if(grid[r+1][c]==1&&m[r+1][c]!=1){
                    m[r+1][c]=1;
                    grid[r+1][c]=2;
                    q.push({r+1,c});
                }
            }
            if(r-1>=0){
                if(grid[r-1][c]==1&&m[r-1][c]!=1){
                    m[r-1][c]=1;
                    grid[r-1][c]=2;
                    q.push({r-1,c});
                }
            }
            if(c-1>=0){
                if(grid[r][c-1]==1&&m[r][c-1]!=1){
                    m[r][c-1]=1;
                    grid[r][c-1]=2;
                    q.push({r,c-1});
                }
            }
            if(c+1<col){
                if(grid[r][c+1]==1&&m[r][c+1]!=1){
                    m[r][c+1]=1;
                    grid[r][c+1]=2;
                    q.push({r,c+1});
                }
            }

        }
        if(q.size()>0){
            count++;
        }

    }
    return count;
    }
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>> q;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]==2){
                    q.push({i,j});
                }
            }
        }
       int count= bfs(grid,q);
         for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]==1){
                    return -1;
                }
            }
        }
        return count;
    }
};