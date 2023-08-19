class Solution {
public:
int val(int v,vector<int> & piles,int h){
        int sum=0;
        int count=0;
        for(int i=0;i<piles.size();i++){
            if(piles[i]<=v){
                count++;
            }
            else{
                sum+=count/h;
                // cout<<i<<endl;
                count=0;
            }
        }
        sum+=count/h;
        cout<<sum<<endl;
       return sum;
    }
    int minDays(vector<int>& bloom, int m, int k) {
        int low=1,high=*max_element(bloom.begin(),bloom.end());
        int ans=-1;
        while(low<=high){
            int mid=(low+(high-low)/2);
            
            int y=val(mid,bloom,k);
            if(y>=m){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        
        return ans;
    }
};