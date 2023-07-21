// class Solution {
// public:
// int solve(vector<int> &nums,int index,int count,int prev,vector<vector<int>>& v){
//      if(index==nums.size())return count;
     
//      if(v[index][prev+1]!=-1)return v[index][prev+1];
//      int pick=0;
//      if(prev==-1||nums[index]-nums[prev]>0){
//  pick=solve(nums,index+1,count+1,index,v);
//      }
//      int nonpick=solve(nums,index+1,count,prev,v);
    
//      return v[index][prev+1]= max(pick,nonpick);
//     }
//     int lengthOfLIS(vector<int>& nums) {
//         vector<vector<int>> v(nums.size()+1,vector<int>(nums.size()+1,-1));
//         return solve(nums,0,0,-1,v);
//     }
// };
class Solution {
public:
int solve(int n ,vector<int>& nums,int curr,int prev , vector<vector<int>>&dp)
{
    if(curr==n) return 0;

    if(dp[curr][prev+1] != -1)
    return dp[curr][prev+1];

    // include
    int take= 0;
    if(prev==-1 || nums[curr]>nums[prev])
    {
        take = 1 + solve(n , nums , curr+1 , curr, dp);
    }
    // excldue
    int nottake=0;
    nottake= 0 + solve(n , nums , curr+1 , prev, dp);
    dp[curr][prev+1]=max(take,nottake);
    return dp[curr][prev+1];
}
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return solve(n , nums , 0, -1,dp) ;  
    }
};