class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int a=0;
        for(int i=0;i<k;i++){
          a+=nums[i];
        }
        int maxi=INT_MIN;
        maxi=max(maxi,a);
        int j=0;
        for(int i=k;i<nums.size();i++,j++){
          a+=nums[i]-nums[j];
          maxi=max(a,maxi);
      
        }
     
        return (double)maxi/k;
    }
};