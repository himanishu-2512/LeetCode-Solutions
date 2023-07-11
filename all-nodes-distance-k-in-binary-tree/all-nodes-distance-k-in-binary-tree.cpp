/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        map<TreeNode*,TreeNode*> m;
        queue<TreeNode*> qu;
      qu.push(root);
      while(!qu.empty()){
          root=qu.front();
          qu.pop();
          if(root->left){
              m[root->left]=root;
              qu.push(root->left);
          }
          if(root->right){
              m[root->right]=root;
              qu.push(root->right);
          }
      }
    
      vector<int> v;
      queue<pair<TreeNode*,int>> q;
      q.push({target,0});
      map<TreeNode*,int> visited;
      while(!q.empty()){
          
          root=q.front().first;
          visited[root]=1;
          int distance=q.front().second;
          q.pop();
          if(distance==k){
              v.push_back(root->val);
          }
          else{
          if(m[root]&&!visited[m[root]]){
              q.push({m[root],distance+1}); 
          }
          if(root->left&&!visited[root->left]){
              q.push({root->left,distance+1});
          }
          if(root->right&&!visited[root->right]){
              q.push({root->right,distance+1});
          }
          }
      }
      return v;
    }
};