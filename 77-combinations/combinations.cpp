class Solution {
public:
vector<vector<int>> ans;
void solve(vector<int> nums,int index,int n,int k){
if(nums.size()>=k){
    ans.push_back(nums);
    return; 
}
for(int i=index;i<=n;i++){
    nums.push_back(i);
    solve(nums,i+1,n,k);
    nums.pop_back();
}
}
    vector<vector<int>> combine(int n, int k) {
        solve({},1,n,k);
        return ans;
    }
};