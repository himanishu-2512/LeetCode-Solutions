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
    TreeNode* Traverse(TreeNode* root1,TreeNode* root2){
        TreeNode* root=new TreeNode();
        if(root1==NULL&&root2==NULL)return NULL;
        else if(!root1&&root2){
        root->val=root2->val;
            root->left=Traverse(root1,root2->left);
            root->right=Traverse(root1,root2->right);
        }
        else if(!root2&&root1){
            root->val=root1->val;
            root->left=Traverse(root1->left,root2);
            root->right=Traverse(root1->right,root2);
        }
        else {
            root->val=root1->val+root2->val;
            root->left=Traverse(root1->left,root2->left);
            root->right=Traverse(root1->right,root2->right);
        }
        return root;
    }
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        return Traverse(root1,root2);
    }
};