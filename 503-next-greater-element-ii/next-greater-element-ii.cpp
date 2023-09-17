class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> s;
        int n=nums.size();
        vector<int> v(n,-1);
        for(int i=2*n-1;i>=0;i--){
            while(!s.empty()){
                if(nums[i%n]>=s.top())s.pop();
                else{
                    v[i%n]=s.top();
                    break;
                }
            }
            s.push(nums[i%n]);
        }
        return v;
    }
};