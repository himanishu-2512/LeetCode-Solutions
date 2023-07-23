class Solution {
public:
 bool dfs(vector<vector<int>>& v,int n,map<int,int> &m,int j){
     m[n]=j;
    for(auto i:v[n]){
       if(!m[i]){

      if(!dfs(v,i,m,-j))return false;
      }
       
     else if(m[n]==m[i])return false;
       
    }
return true;
 }
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
    vector<vector<int>> v(n+1);
    map<int,int> m;
    for(int i=0;i<dislikes.size();i++){
        v[dislikes[i][0]].push_back(dislikes[i][1]);
        v[dislikes[i][1]].push_back(dislikes[i][0]);
    }
    for(int i=1;i<n+1;i++){
        if(!m[i]&&v[i].size()>0){
        if(!dfs(v,i,m,1))return false;
        }
    }
    return true;
    }
};