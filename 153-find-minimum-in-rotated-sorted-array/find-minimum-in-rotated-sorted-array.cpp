class Solution {
public:
    int findMin(vector<int>& arr) {
        int low=0,high=arr.size()-1;
	int ans=INT_MAX;
	while(low<=high){
		int mid=low+(high-low)/2;
		if(arr[mid]>=arr[high]){
			ans=min(ans,arr[mid]);
			low=mid+1;

		}
		else{
			ans=min(ans,arr[mid]);
			high=mid-1;
		}
	}
	return ans;
    }
};