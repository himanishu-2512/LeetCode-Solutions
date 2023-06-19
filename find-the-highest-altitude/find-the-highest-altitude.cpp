class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int g=0;
        int maxi=0;
        for(int i=0;i<gain.size();i++){
          g+=gain[i];
          maxi=max(g,maxi);
        }
        return maxi;
    }
};