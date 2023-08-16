class Solution {
public:
int first(vector<int>& arr, int n, int k){
    int low=0,high=n-1;
    int ans=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==k){
            ans=mid;
           high=mid-1;
        }
        else if(arr[mid]>k){
            high=mid-1;
        }
        else low=mid+1;
    }
    return ans;
}
int last(vector<int>& arr, int n, int k){
    int low=0,high=n-1;
    int ans=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==k){
            ans=mid;
           low=mid+1;
        }
        else if(arr[mid]>k){
            high=mid-1;
        }
        else low=mid+1;
    }
    return ans;
}
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        return {first(nums,n,target),last(nums,n,target)};
        
    }
};