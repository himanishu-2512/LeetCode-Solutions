class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int count=0;int check=0;int ind=-1;
        for(int i=nums.size()-1;i>=1;i--){
            if(nums[i]>nums[i-1]){
                for(int j=i;j<nums.size();j++)
                {
                    int mn =INT_MAX;
                    if(nums[j]>nums[i-1])
                    {
                        if(mn>nums[j]-nums[i-1])
                        {
                            mn=nums[j]-nums[i-1];
                            ind =j;
                        }
                       //out<<nums[j]<<endl;
                    }
                }
                    if(ind!=-1)
                    {
                       //out<<ind<<endl;
                        int temp = nums[ind];
                        nums[ind]=nums[i-1];
                        nums[i-1]=temp;
                        reverse(nums.begin()+i,nums.end());
                        check =1;
                        break;
                    }
                }
                    
                
                
                
            else{
                count++;
            }
            if(check==1)
                {
                    break;
                }
        }
            if(count==nums.size()-1){
                reverse(nums.begin(),nums.end());
            }
    }
};