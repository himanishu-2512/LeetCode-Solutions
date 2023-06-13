class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<vector<int>> grid2(n,vector<int>(n,0));
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
               grid2[i][j]=grid[j][i];
                
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
               if(grid2[i]==grid[j])count++;
                
            }
        }
        return count;
    }
};