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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> v;
         queue<TreeNode*> q;
        if(root){
        q.push(root);
     
        v.push_back({root->val});}
        int j=0;
        while(!q.empty()){
       int size=q.size();
    
        vector<int> v1;
       
    
        for(int i=0;i<size;i++){
            root=q.front();
            q.pop();
           if(root->left!=nullptr){
            v1.push_back(root->left->val);
            q.push(root->left);}
            if(root->right!=nullptr){
            v1.push_back(root->right->val);
            q.push(root->right);}

   }
   
   if(!q.empty()&&v1.size()){
    j++; 
   if(j%2==0){v.push_back(v1);}
   else{
       reverse(v1.begin(),v1.end());
       v.push_back(v1);
   }}
   
        }
        return v;
    }
};