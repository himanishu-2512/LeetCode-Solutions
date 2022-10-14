class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int> v(nums.size());
        int n;
        for(int i=0;i<nums.size();i++){
            if(v[nums[i]]==1){
                n=nums[i];
                break;
            }
            else{
            v[nums[i]]=1;}
            }
        return n;
    }
};