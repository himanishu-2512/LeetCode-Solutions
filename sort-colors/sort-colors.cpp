class Solution {
public:
    void sortColors(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        int j=0;
        while(j<nums.size()){
            
            while(m[0]--){
                nums[j++]=0;
            }
             while(m[1]--){
                nums[j++]=1;
            }
             while(m[2]--){
                nums[j++]=2;
            }
        }
    }
};