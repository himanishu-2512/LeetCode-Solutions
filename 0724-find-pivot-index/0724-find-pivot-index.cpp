class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=0;
        int count=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        for(int i=0;i<nums.size();i++){
        
        if(count==(sum-count-nums[i]))return i;
            count+=nums[i];
        }
        return -1;
    }
};