class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int a=0;
        for(int i=0;i<nums.size();i++){
            a^=(nums[i]^(i+1));
        }
        return a;
    }
};