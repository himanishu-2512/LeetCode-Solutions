class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& pre) {
     
          vector<vector<int>> v(n);

        vector<int> indegree(n+1,0),v1;
        for(int i=0;i<pre.size();i++){
            v[pre[i][1]].push_back(pre[i][0]);
        }
        for(int i=0;i<v.size();i++){
               for(int index:v[i]){
                  indegree[index]++;
               }
        }
        queue<int> q;
        for(int i=0;i<n;i++){
            if(!indegree[i]){
                q.push(i);
            }
        }
        while(!q.empty()){
            int t=q.front();
            v1.push_back(t);
            q.pop();
            for(int index:v[t]){
                  indegree[index]--;
                  if(indegree[index]==0){
                      q.push(index);
                  }
            }
        }
    if(n!=v1.size())return {};
    return v1;
       }
};