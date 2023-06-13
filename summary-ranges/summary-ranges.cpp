class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int n=nums.size();
        vector<string> v;
        if(n==0)return v;
        string s="";
        int a=nums[0];
        int b;
        for(int i=0;i<n-1;i++){
            if(nums[i]+1!=nums[i+1]){
                 b=nums[i];
                 if(a!=b){
                 s=to_string(a);
                 s+="->";
                 s+=to_string(b);}
                 else
                 s=to_string(a);
                 v.push_back(s);
                 a=nums[i+1]; 
                  }
                  else{
                b=nums[i+1];
            }
            
            
    }
    if(a==nums[n-1])v.push_back(to_string(a));
    if(n>1&&b==nums[n-1]){
        s=to_string(a);
        s+="->";
        s+=to_string(b);
        v.push_back(s);
    }


        
       
        return v;
    }
};