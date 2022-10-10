class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
         vector<int> v;
            int count=0;
        for(int i=0;i<nums.size();i++){
           
            if(nums[i]==0){
                v.push_back(count);
                count=0;
            
            }
            else if(nums[i]==1)
                count++;
            }
v.push_back(count);
        
    int val=*max_element(v.begin(),v.end());
        return val;
    }
    
};