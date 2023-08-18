class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        if(nums.size()==1)return nums[0];
        if(nums[0]!=nums[1])return nums[0];
        if(nums[n-1]!=nums[n-2])return nums[n-1];
     int low=1,high=nums.size()-2;
     while(low<=high){
         int mid =low+(high-low)/2;
        //  cout<<mid<<endl;
         if(mid%2==0){
             if(nums[mid]==nums[mid+1]){
                 low=mid+1;
             }
             else if(nums[mid]==nums[mid-1]){
                 high=mid-1;
             }
             else return nums[mid];
         }
         else{
             if(nums[mid]==nums[mid+1]){
                 high=mid-1;
             }
             else if(nums[mid]==nums[mid-1]){
                 low=mid+1;
             }
             else return nums[mid];
         }
     }
     return -1;
    }
};