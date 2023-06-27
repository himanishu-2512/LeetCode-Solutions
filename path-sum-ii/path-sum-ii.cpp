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
    vector<vector<int>> v;
    vector<int> v1;
    void traverse(TreeNode *root,int k){
        if(root==NULL){
            return ;
        }
        if(root&&root->left==NULL&&root->right==NULL){
            if(k==root->val){
                v1.push_back(k);
                v.push_back(v1);
                v1.pop_back();
            
            }
            return;
        }
        v1.push_back(root->val);
        traverse(root->left,k-root->val);
        traverse(root->right,k-root->val);
        v1.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        traverse(root,targetSum);
        return v;
    }
};