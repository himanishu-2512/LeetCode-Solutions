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
int mini=INT_MAX;
void Traversal(TreeNode* root,int count){
    if(root==NULL){
       return;
    }
    if(root->left==NULL&&root->right==NULL){
        count++;
        mini=min(mini,count);
        return;
    }
    
    Traversal(root->left,count+1);
    Traversal(root->right,count+1);
}
    int minDepth(TreeNode* root) {
         Traversal(root,0);
         if(mini==INT_MAX)return 0;
return mini;

    }
};