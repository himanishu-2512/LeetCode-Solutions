class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
    vector<int>::iterator it=find(nums.begin(),nums.end(),target);
        int high=nums.size()-1,low=0;
    if(it!=nums.end()){
        return it-nums.begin(); 
    }else{
        int i;
       for(i=0;i<nums.size();i++){
           if(nums[i]>target){
               return i;
           }
       }
        return i;
      
    }
    
    
            
        
    }
};