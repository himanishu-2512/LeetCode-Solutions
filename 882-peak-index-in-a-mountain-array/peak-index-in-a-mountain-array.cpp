class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int low=0,high=arr.size()-1;
        while(low<high){
            int mid=low+(high-low)/2;
            if(low<=mid-1&&high>=mid+1){
                if(arr[mid+1]<arr[mid]&&arr[mid-1]<arr[mid]){
                    return mid;
                }
                else if(arr[mid+1]>arr[mid]&&arr[mid-1]<arr[mid]){
                    low=mid;
                }
                else{
                    high=mid;
                }
            }
        }
        return low;
    }
};