class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int p=prices[0];
        int o=prices[0];
        int profit=0;
        bool t=false;
        for(int i=1;i<prices.size();i++){
            if(prices[i-1]>prices[i]){
                if(t){
                    profit+=o-p;
                    t=false;
                }
                p=prices[i];
            }
            if(prices[i]>prices[i-1]){
               o=prices[i];
               t=true;
            }
        }
        if(t){
                    profit+=o-p;
                    t=false;
                }
        return profit;
    }
};