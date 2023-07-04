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
int maxi=INT_MIN;
    int height(TreeNode * root){
        if(root==NULL){
            return 0;
        }
        int left=height(root->left);
        int right=height(root->right);
        int sum=root->val+max(left+right,max(left,max(right,0)));
        maxi=max(maxi,sum);
        return root->val+max(left,max(right,0));
    }
    int maxPathSum(TreeNode* root) {
        height(root);
        return maxi;
    }
};