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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> v;
        map<int,int> m;
        queue<pair<TreeNode*,int>> q;
        if(root)
        q.push({root,0});
        while(!q.empty()){
            auto it=q.front();
            q.pop();
            root=it.first;
            int row=it.second;
            m[row]=root->val;
            if(root->left)q.push({root->left,row+1});
            if(root->right)q.push({root->right,row+1});
            
        }
        for(auto i:m){
            v.push_back(i.second);
        }
        return v;
    }
};