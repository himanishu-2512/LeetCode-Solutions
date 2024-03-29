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
int solve(TreeNode * root){
    if(root==NULL){
            return 0;
        }
return max(solve(root->left),solve(root->right))+1;
        
}
    bool isBalanced(TreeNode* root) {
        if(root==NULL){
            return true;
        }
        int left=solve(root->left);
        int right=solve(root->right);
        if(abs(right-left)>1)return false;

        bool r=isBalanced(root->right);
        bool l=isBalanced(root->left);
        return l&&r;


    }
};