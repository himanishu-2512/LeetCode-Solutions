class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=0,n;
        
        for(int i=0;i<nums.size();i++){
            if(i){
               if(nums[i]>nums[i-1])
                   count=0;
            }
            count++;
            if(count>(nums.size()/2))
            {n=nums[i];
             break;}
            
                
        }
        return n;
    }
};