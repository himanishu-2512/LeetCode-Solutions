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
int val=0;
    bool count(TreeNode* root,int maxi){
        if(root==NULL){
            return false;
        }
        maxi=max(maxi,root->val);
        bool t=maxi==root->val;
        if(count(root->left,maxi))val++;
        if(count(root->right,maxi))val++;

        return t;

    }
    int goodNodes(TreeNode* root) {
        int maxi=-1e4-1;
        if(count(root,maxi))val++;
        return val;
    }
};