class Solution {
public:
vector<vector<int>>v1;
void sub(vector<int> nums,int index,vector<int> &v){
   if(index>=nums.size()){
v1.push_back(v);
return;
   }

   sub(nums,index+1,v);
   v.push_back(nums[index]);
   sub(nums,index+1,v);
    v.pop_back();

}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> v;
       sub(nums,0,v);
       return v1;
    }
};