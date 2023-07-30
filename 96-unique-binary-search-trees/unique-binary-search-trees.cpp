class Solution {
public:
    int solve(vector<int> &dp,int n){
if(n<=1)return 1;
int ans=0;
if(dp[n]!=-1)return dp[n];
for(int i=1;i<=n;i++){
            ans+=solve(dp,n-i)*solve(dp,i-1);
        }

     return ans;
    }
    int numTrees(int n) {
        vector<int> dp(n+1,-1);
        
        return solve(dp,n);
    }
};