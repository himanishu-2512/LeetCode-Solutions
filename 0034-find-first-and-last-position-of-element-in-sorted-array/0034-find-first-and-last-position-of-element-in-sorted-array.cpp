class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>::iterator l,h;
        l=lower_bound(nums.begin(),nums.end(),target);
        h=upper_bound(nums.begin(),nums.end(),target);
        if(l==nums.end()||*l>target){
            return {-1,-1};
        }
        else{
            vector<int> v;
            v.push_back(l-nums.begin());
            v.push_back(h-nums.begin()-1);
            return v;
        }
        return {-1,-1};
    }
};