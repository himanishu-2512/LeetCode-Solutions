class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>v;
        map<int,int>n;
        
        for(int i=1;i<=nums.size();i++){
            n.insert({i,0});
           
            
        }
         for(int i=0;i<nums.size();i++){
              n[nums[i]]++;
         }
        
    for(int i=1;i<=nums.size();i++){
        if(n[i]==0){
            v.push_back(i);
        }
    }
        return v;
    }
};