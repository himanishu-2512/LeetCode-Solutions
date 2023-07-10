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
   TreeNode * Traversal(vector<int>& nums,int left,int right){
       if(left>right)return NULL;
       int max=-1;
        int index=-1;
       for(int i=left;i<=right;i++){
       if(nums[i]>max){max=nums[i];
            index=i;}
       }
       TreeNode* root=new TreeNode(max);
       root->left=Traversal(nums,left,index-1);
       root->right=Traversal(nums,index+1,right);
       return root;
   }
   void Traverse(TreeNode *root){
   if(root==NULL)return;
   Traverse(root->left);
   v.push_back(root->val);
   Traverse(root->right);
   }
    TreeNode* insertIntoMaxTree(TreeNode* root, int val) {
        Traverse(root);
        v.push_back(val);
        return Traversal(v,0,v.size()-1);

    }
};