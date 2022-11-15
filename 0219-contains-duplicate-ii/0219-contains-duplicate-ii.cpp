
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        bool flag=false;
if(nums.size()<=1)return flag;
        else{map<int,int>m;
            
            for(int i=0;i<nums.size();i++){
                if(m[nums[i]]>0){
                    if(abs(m[nums[i]]-i-1)<=k){
                        return true;
                    }
                    else{
                        m[nums[i]]=i+1;
                    }
                }
                else{
                     m[nums[i]]=i+1;
                }

                
            }
        }
        return flag;
    }
}; 