/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:
    void Traverse(string &s,TreeNode* root){
        if(root==NULL){
            s.push_back('_');
            s.push_back(' ');
            return;
        }
        s+=to_string(root->val);
        s.push_back(' ');
        Traverse(s,root->left);
        Traverse(s,root->right);

    }
    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string s="";
       Traverse(s,root);
       cout<<s<<endl;
       return s; 
    }
    TreeNode* Traversal(vector<string> &v,int &i){
       if(v[i]=="_")return NULL;
       TreeNode *root=new TreeNode(stoi(v[i]));
       i++;
       root->left=Traversal(v,i);
       i++;
       root->right=Traversal(v,i);
       return root;

    }
    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        string s;
        vector<string> v;
        for(int i=0;i<data.size();i++){
             if(data[i]==' '){
                 v.push_back(s);
                 s="";
             }
             else{
                 s+=data[i];
             }
         }
        int i=0;
       TreeNode *root=Traversal(v,i);
       return root;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));