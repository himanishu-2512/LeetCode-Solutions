class Solution {
public:
    bool check(vector<int>& nums) {
        int count=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]>nums[i]){
             count=i;
                break;
            }
            
        }
        if(count){
            reverse(nums.begin()+count,nums.end());
        reverse(nums.begin(),nums.begin()+count);
                reverse(nums.begin(),nums.end());
        }
        
    
      return is_sorted(nums.begin(),nums.end());
    }
};