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
    int leftheight(TreeNode* root){
        int h=0;
        while(root){
            root=root->left;
            h++;
        }
        return h;
    }
    int rightheight(TreeNode* root){
        int h=0;
        while(root){
            root=root->right;
            h++;
        }
        return h;
    }
    int Traversal(TreeNode* root){
        if(root==NULL)return 0;
        int left=leftheight(root->left);
        int right=rightheight(root->right);
        if(left==right){
            return(2<<left)-1;
        }
        return Traversal(root->left)+Traversal(root->right)+1;
    }
    int countNodes(TreeNode* root) {
        return Traversal(root);
    }
};