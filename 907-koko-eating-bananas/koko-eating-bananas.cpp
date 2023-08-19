class Solution {
public:
    int val(int v,vector<int> & piles,int h){
        int sum=0;
        for(int i=0;i<piles.size();i++){
            sum+=(piles[i]/v)+((piles[i]%v)!=0);
            if(sum>h)return 1;
          
        }
       
      
        return -1;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi=*max_element(piles.begin(),piles.end());
        int low=1,high=maxi;
        int ans=INT_MAX;
        while(low<=high){
            int mid=low+(high-low)/2;
            int x=val(mid,piles,h);
            // cout<<mid<<endl;
            
             if(x==-1){
                if(ans>mid)
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};