class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0,high=nums.size()-1;
   
        while(low<=high){
           int mid=(low+high)>>1;
         
           if(nums[mid]==target){return mid;}
          else if(nums[mid]<=nums[high]){
                if(target<=nums[high]&&nums[mid]<=target){
                    low=mid+1;
                  
                }
                else{
                    high=mid-1;
                 
                }
            }
            else{
                 if(target>=nums[low]&&nums[mid]>=target){
                    high=mid-1;
                    
                }
                else{
                    low=mid+1;
                 
                }
            }}
        return -1;
    }
};