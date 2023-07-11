class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int count=0;
        int maxi=0;
        for(int i=0,j=0;i<nums.size();i++){
           if(nums[i]==0){
               count++;
           }
             while(count>k){
                 if(nums[j++]==0){
                   count--;
                 }
             }
           maxi=max(i-j+1,maxi);
        }
        return maxi;
    }
};