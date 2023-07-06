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
vector<int> v1,v2;
void Traversal2(TreeNode * root){
        if(root==NULL){v2.push_back(-101);
        return;}
        v2.push_back(root->val);
        Traversal2(root->right);
        Traversal2(root->left);
    }
    void Traversal(TreeNode * root){
        if(root==NULL){v1.push_back(-101);return;}
        v1.push_back(root->val);
        Traversal(root->left);
        Traversal(root->right);
    }
    bool isSymmetric(TreeNode* root) {
        Traversal(root->left);
        Traversal2(root->right);
        return v1==v2;
        
    }
};