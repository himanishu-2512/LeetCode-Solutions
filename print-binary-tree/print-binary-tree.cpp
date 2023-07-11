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
// int height;
void Traverse(TreeNode *root,vector<vector<string>>&v,int row,int col,int height){
if(!root)return ;
v[row][col]=to_string(root->val);
int factor=pow(2,height-row-1);
Traverse(root->left,v,row+1,col-factor,height);
Traverse(root->right,v,row+1,col+factor,height);

}
int heights(TreeNode* root){
    if(!root)return 0;
    return max(heights(root->left),heights(root->right))+1;
}
    vector<vector<string>> printTree(TreeNode* root) {
        int height=heights(root);  
        height--;
        vector<vector<string>> v(height+1,vector<string>((2<<height)-1));
        int col=((2<<height)-2)/2;
        Traverse(root,v,0,col,height);
        return v;
    }
};