class Solution {
public:
    int maxArea(vector<int>& height) {
     int left=0,right=height.size()-1;
     int maxArea=0;
    while(left<right){
      int sum=(right-left)*min(height[left],height[right]);
      maxArea=max(sum,maxArea);
      if(height[left]<height[right]){
        left++;
      }
      else right--;
     }
     return maxArea;
    }
};