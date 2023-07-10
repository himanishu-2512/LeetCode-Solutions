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
unordered_map<int,int> m;
    TreeNode *Traversal(vector<int>& in,vector<int>& post,int instart,int inend,int poststart,int postend){
        if(instart>inend||poststart>postend)return NULL;
        int rootval=post[postend];
        TreeNode* root=new TreeNode(rootval);
        int left=m[post[postend]];
        root->left=Traversal(in,post,instart,left-1,poststart,poststart+(left-instart)-1);
        root->right=Traversal(in,post,left+1,inend,poststart+(left-instart),postend-1);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        for(int i=0;i<inorder.size();i++){
            m[inorder[i]]=i;
        }
        return Traversal(inorder,postorder,0,inorder.size()-1,0,postorder.size()-1);
    }
};