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

 bool isleaf(TreeNode* root){
    if(!root->left&&!root->right)return true;
    return false;
}
void Traverse(TreeNode * root,vector<int> &v){
if(!root)return;
if(isleaf(root)){v.push_back(root->val);}
else{
    Traverse(root->left,v);
    Traverse(root->right,v);
}
}
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> v1,v2;
        Traverse(root1,v1);
        Traverse(root2,v2);
        return v1==v2;
    }
};