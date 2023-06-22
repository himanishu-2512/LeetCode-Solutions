/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
vector<int> v;
void Traverse(Node* root){
    if(root==NULL)return;
    v.push_back(root->val);
    for(int i=0;i<root->children.size();i++){
        Traverse(root->children[i]);
    }
}
    vector<int> preorder(Node* root) {
        Traverse(root);
        return v;
    }
};