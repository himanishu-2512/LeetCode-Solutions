class Solution {
public:
    bool dfs(vector<vector<int>>& graph,int i,unordered_map<int,int> &m,int n){
    m[i]=n;
    for(int j:graph[i]){
        if(!m[j]){
            m[j]=-m[i];
            if(!dfs(graph,j,m,-n))return false;
        }
        else if(m[j]==m[i])return false;
    }
    return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        unordered_map<int,int> m;
        for(int i=0;i<graph.size();i++){
        if(m[i]==0)
        if(!dfs(graph,i,m,1)){
           return false;
        }
      }
       return true;
    }
};