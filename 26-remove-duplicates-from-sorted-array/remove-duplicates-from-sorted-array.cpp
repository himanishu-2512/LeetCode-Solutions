class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int a=1;
        int k=nums[0];
        for(int i=1;i<nums.size();i++){
          if(nums[i]!=k){
           k=nums[i];
           nums[a++]=nums[i];
          }
        }
        return a;
    }
};