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
vector<int> v;
void traversal(TreeNode * root){
    if(root==NULL)return;
    traversal(root->left);
    v.push_back(root->val);
    traversal(root->right);
}
    int getMinimumDifference(TreeNode* root) {
       
        traversal(root);
        int mini=INT_MAX;
        if(v.size()==1||v.size()==0)return 0;
        for(int i=0;i<v.size()-1;i++){
            mini=min(mini,v[i+1]-v[i]);
        }
        return mini;
    }
};