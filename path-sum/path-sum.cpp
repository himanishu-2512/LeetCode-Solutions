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
    bool Traverse(TreeNode* root,int k){
        if(root==NULL)return false;
        
         if(root&&root->left==NULL&&root->right==NULL){
             if(k==root->val)return true;
             return false;
         }
        
        bool l=Traverse(root->left,k-root->val);
        bool r=Traverse(root->right,k-root->val);
        return l||r;
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==nullptr)return false;
        
        return Traverse(root,targetSum);
    }
};