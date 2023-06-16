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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        queue<TreeNode *> q;
        q.push(root);
        priority_queue<long long ,vector<long long>,greater<long long>> heap;
        while(!q.empty()){
            int size=q.size();
            long long temp=0;
            for(int i=0;i<size;i++){
                TreeNode* node=q.front();
                q.pop();
                if(node->left)
                q.push(node->left);
                if(node->right)
                q.push(node->right);
                temp+=node->val;
            }
heap.push(temp);
if(heap.size()>k){
    heap.pop();
}

        }
        if(heap.size()<k){
            return -1;
        }
     return heap.top();
    }
};