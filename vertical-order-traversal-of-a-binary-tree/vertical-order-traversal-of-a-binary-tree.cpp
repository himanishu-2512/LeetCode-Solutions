/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
   map<int,map<int,vector<int>>> m;
   int rowmax=INT_MIN,colmax=INT_MIN;
   int rowmin=INT_MAX;
   void Traversal(TreeNode* root,int row,int col){
       if(!root){
           return;
       }
   m[row][col].push_back(root->val);
   rowmax=max(rowmax,row);
   rowmin=min(rowmin,row);
   colmax=max(colmax,col);
   Traversal(root->left,row-1,col+1);
   Traversal(root->right,row+1,col+1);

   }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> v1;
        Traversal(root,0,0);
        for(int i=rowmin;i<=rowmax;i++){
            vector<int> v;
            for(int j=0;j<=colmax;j++){
              sort(m[i][j].begin(),m[i][j].end());
              for(int k:m[i][j]){
                  v.push_back(k);
              }
            }
            v1.push_back(v);
        }

     return v1;
    }
};