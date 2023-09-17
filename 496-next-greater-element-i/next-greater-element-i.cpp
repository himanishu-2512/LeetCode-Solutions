class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> s;
        vector<int> v(nums2.size(),-1);
        map<int,int> m;
        for(int i=nums2.size()-1;i>=0;i--){
            m[nums2[i]]=i;
            while(!s.empty()){
                if(nums2[i]>=s.top())s.pop();
                else{
                    v[i]=s.top();
                    break;
                }
            }
            s.push(nums2[i]);
        }
        for(int i=0;i<nums1.size();i++){
            nums1[i]=v[m[nums1[i]]];
        }
        return nums1;
    }
};