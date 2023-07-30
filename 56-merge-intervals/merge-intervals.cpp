class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> v;
        sort(intervals.begin(),intervals.end());
        v.push_back(intervals[0]);
        for(int i=1;i<intervals.size();i++){
            int n=v.size();
          int a=v[n-1][1];
          int b=intervals[i][0];
          int c=intervals[i][1];
          if(a>=b){
              if(c>a){
                 v[n-1][1]=c;
              }
          }
          else{
              v.push_back({b,c});
          }
          
        }
       return v; 
    }
};