class Solution {
public:
   int solve(int m,int n,int i,int j,vector<vector<int>> &v){
       if(i>m||j>n){
           return 0;
       }
       if(v[i][j]!=-1)return v[i][j];
       if(i==m||n==j){
           return 1;
       }
      
       return v[i][j]=solve(m,n,i+1,j,v)+solve(m,n,i,j+1,v);
   }
    int uniquePaths(int m, int n) {
        vector<vector<int>> v(m,vector<int>(n,-1));
        return solve(m-1,n-1,0,0,v);
    }
};