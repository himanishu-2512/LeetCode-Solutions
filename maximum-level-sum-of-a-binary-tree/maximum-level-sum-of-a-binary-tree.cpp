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
    int maxLevelSum(TreeNode* root) {
        int maxi=INT_MIN;
    queue<TreeNode*> q;
    int ans=-1;
   
    q.push(root);
    int level=0;
   
    while(!q.empty()){
        level++;
        int temp=0;
        int size=q.size();
       for(int i=0;i<size;i++){
         TreeNode* s=q.front();
         q.pop();
       temp+=s->val;
       if(s->left)q.push(s->left);
       if(s->right)q.push(s->right);

       }
      
      if(temp > maxi){
                  ans = level;
                  maxi = temp;
              }


    }
    return ans;
    }
};