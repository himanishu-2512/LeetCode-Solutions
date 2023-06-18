class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        vector<int> v(nums.size());int a=1,b=nums.size()-1;
  sort(nums.begin(),nums.end());
while(a<nums.size()){
    v[a]=nums[b--];
    a+=2;
}
a=0;
while(a<nums.size()){
    v[a]=nums[b--];
    a+=2;
}
nums=v;
    }
};