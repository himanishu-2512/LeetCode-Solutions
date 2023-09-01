class Solution {
public:
int solve( vector<vector<int>> &grid, int m, int n, int i, int j ,vector <vector <int> > & v ){
       if(i>m||j>n){
           return INT_MAX;
       }
       if(v[i][j]!=-1)return v[i][j];
       if(i==m&&n==j){
           return grid[i][j];
       }
      
       return v[i][j] = grid[i][j] + min ( solve(grid, m, n, i+1, j, v), solve(grid, m, n, i, j+1, v ));
       }
    int minPathSum(vector<vector<int>>& grid) {
        vector<vector<int>> v(grid.size()+1,vector<int>(grid[0].size(),-1));
       return solve(grid, grid.size()-1, grid[0].size()-1, 0, 0, v);
   }
    
};