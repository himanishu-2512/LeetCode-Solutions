class Solution {
public:
    void sortColors(vector<int>& nums) {
       
        for(int i=0;i<nums.size()-1;i++){
    for(int j=nums.size()-2;j>=i;j--){
               if(nums[j]>nums[j+1]){
                   nums[j]=nums[j]+nums[j+1];
                   nums[j+1]=nums[j]-nums[j+1];
                   nums[j]=nums[j]-nums[j+1];
               }

            }   
           
            
        }
    }
};