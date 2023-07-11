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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> v;
        queue<TreeNode*> q;
        if(root){
            q.push(root);
        }
        while(!q.empty()){
            int size=q.size();
            vector<int> v1;
            while(size--){
                root=q.front();
                q.pop();
                v1.push_back(root->val);
                if(root->left)q.push(root->left);
                if(root->right)q.push(root->right);
            }
            v.push_back(v1);
        }
        reverse(v.begin(),v.end());
        return v;

    }
};