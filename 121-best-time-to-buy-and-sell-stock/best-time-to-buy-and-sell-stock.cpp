class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int p=prices[0];
        int maxprofit=0;
        for(int i=1;i<prices.size();i++){
            if(p>prices[i]){
             p=prices[i];
            }
            maxprofit=max(maxprofit,prices[i]-p);
        }
        return maxprofit;
    }
};