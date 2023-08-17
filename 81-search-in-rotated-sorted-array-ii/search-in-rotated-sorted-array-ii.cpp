class Solution {
public:
    bool search(vector<int>& arr, int k) {
        int l = 0,h = arr.size()-1;
    while (l <= h){
        int mid = l+(h-l)/2;
        if (arr[mid] == k) return true;
        if(arr[mid]==arr[l]&&arr[mid]==arr[h]){
            l++;
            h--;
        }
                
        else if (arr[l] <= arr[mid]){
            if (arr[l] <= k && k <= arr[mid]){
                h = mid - 1;
            }else{
                l = mid + 1;
            }
        }else{
            if (arr[mid] <= k && k <= arr[h]){
                l = mid + 1;
            }else{
                h = mid - 1;
            }
        }
    }
    return false;
    }
    
};