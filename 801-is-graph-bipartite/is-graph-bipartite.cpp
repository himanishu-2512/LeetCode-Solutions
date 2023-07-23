class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        unordered_map<int,int> m;
        for(int i=0;i<graph.size();i++){
        queue<pair<int,int>> q;
        if(m[i]==0)
        q.push({i,1});
        
       
       while(!q.empty()){
           auto [n,a]=q.front();
           m[n]=a;
           q.pop();
           for(auto i:graph[n]){
             if(m[i]!=0){
                 if(m[i]!=-a){
                   return false;
                 }
             }else{
                 m[i]=-a;
                 q.push({i,-a});
             }

           }
       }}
       return true;
    }
};