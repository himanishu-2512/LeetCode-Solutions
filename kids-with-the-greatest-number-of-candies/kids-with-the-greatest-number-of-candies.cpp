class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int e) {
        vector<bool> v;
        int maxi=*max_element(candies.begin(),candies.end());
        for(int i:candies){
            if(i+e>=maxi)v.push_back(true);
            else v.push_back(false);

        }
        return v;
    }
};