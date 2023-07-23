class Solution {
public:
 bool bfs(vector<vector<int>>& v,int n,map<int,int> &m){
     queue<int> q;
     q.push(n);
     m[n]=1;
     while(!q.empty()){
         int i=q.front();
            q.pop();
            for(int node:v[i]){
                if(m[node]!=0){
                    if(m[node]==m[i])return false;
                }else{
                    m[node]=-1*m[i];
                    q.push(node);
                }
            }
            
         
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
        if(!bfs(v,i,m))return false;
        }
    }
    return true;
    }
};