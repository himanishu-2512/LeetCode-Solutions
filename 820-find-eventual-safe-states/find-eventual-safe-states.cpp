class Solution {
public:
    bool dfs(vector<vector<int>>& graph,int index,vector<bool> & visited,vector<bool> &ans,vector<bool>& check){
        visited[index]=true;
        ans[index]=true;
        for(int i:graph[index]){
            if(visited[i]){
                if(ans[i])return true;
            }
            else {
                 if(dfs(graph,i,visited,ans,check))return true;
            }

        }
        ans[index]=false;
        check[index]=true;
        return false;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int> v;
        vector<bool> visited(n+1),ans(n+1),check(n+1);
        
        for(int i=0;i<n;i++){
            dfs(graph,i,visited,ans,check);
        }
        for(int i=0;i<n;i++){
            if(check[i])v.push_back(i);
        }

return v;
    }
};