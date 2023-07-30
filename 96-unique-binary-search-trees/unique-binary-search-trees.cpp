class Solution {
public:
//     int solve(vector<int> &dp,int n){
// if(n<=1)return 1;
// int ans=0;
// if(dp[n]!=-1)return dp[n];
// for(int i=1;i<=n;i++){
//             ans+=solve(dp,n-i)*solve(dp,i-1);
// }

//      return ans;
//     }
int solve(vector<int> &dp,int n){
dp[0]=dp[1]=1;

for(int i=2;i<=n;i++){
    for(int j=1;j<=i;j++){
        dp[i]+=dp[j-1]*dp[i-j];
    }
}

     return dp[n];
    }



    int numTrees(int n) {
        vector<int> dp(n+1,0);
        
        return solve(dp,n);
    }
};