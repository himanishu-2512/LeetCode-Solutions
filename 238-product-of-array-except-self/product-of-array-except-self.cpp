class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> arr(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            nums[i]*=nums[i-1];
        }
        int right=1;
        for(int i=nums.size()-1;i>=0;i--){
            if(i==0)nums[i]=right;
            else{
            
            nums[i]=nums[i-1]*right;
            right*=arr[i];
            }
        }

     return nums;
    }
     
};