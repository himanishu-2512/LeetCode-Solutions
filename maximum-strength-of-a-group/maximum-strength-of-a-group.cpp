class Solution {
public:
    long long maxStrength(vector<int>& nums) {
        
   sort(nums.begin(),nums.end());
   int a=0;
   long long p=1;
   int count=0;
   bool f =false;
   for(int i=0;i<nums.size();i++){
       if(nums[i]<0){
           count++;
       }
       else if(nums[i]>0){
          f=true;
           p*=nums[i];
       }
   }
   if(count%2==0){
       while(a<nums.size()&&nums[a]<0){
          p*=nums[a++];
          f=true;
       }
       
   }
   else{
       count--;
       while(count--){
           p*=nums[a++];
           f=true;
       }
   }
   
   if(!f)return *max_element(nums.begin(),nums.end());
return p;
    }
};