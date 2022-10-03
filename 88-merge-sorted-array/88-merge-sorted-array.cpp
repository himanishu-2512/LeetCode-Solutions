class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int j=0,k=0;
        vector<int> v;
      for(int i=0;i<m+n;i++){
          if(j<m&&k<n){
             if(nums1[j]>nums2[k]){
                 v.push_back(nums2[k]);
                 k++;
             }
              else{
                  v.push_back(nums1[j]);
                 j++; 
              }
          }
          else if(j<m){
              v.push_back(nums1[j]);
              j++;
          }
          else if(k<n){
              v.push_back(nums2[k]);
              k++;
          }
      }  
        nums1=v;
    }
};