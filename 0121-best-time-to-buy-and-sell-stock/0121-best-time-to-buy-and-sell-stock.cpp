class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_val=prices[0];
        if(prices.size()==1)return 0;
        int res=prices[1]-prices[0];
        for(int i=0;i<prices.size();i++){
            res=max(res,prices[i]-min_val);
            min_val=min(min_val,prices[i]);
        }
        if(res<0)return 0;
        else return res;
    }
};