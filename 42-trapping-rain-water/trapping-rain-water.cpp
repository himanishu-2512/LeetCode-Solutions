class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int sum=0,right=0,left=0,l=0,r=n-1;
       while(l<=r){
            if(left<=right){
            if(left<height[l]){
                left=height[l];
            }
            else sum+=left-height[l];
            l++;
        }
         else{
            if(right<height[r]){
                right=height[r];
            }
            else sum+=right-height[r]; 
            r--;
         }
       }
      return sum;
    }
};