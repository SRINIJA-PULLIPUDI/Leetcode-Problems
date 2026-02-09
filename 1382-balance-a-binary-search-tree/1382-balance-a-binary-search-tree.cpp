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
vector<int> t;
void inorder(TreeNode* root){
    if(root==nullptr) return;
    inorder(root->left);
    t.push_back(root->val);
    inorder(root->right);
}
TreeNode* bst(int l,int h, vector<int> t){
    if(l>h) return nullptr;
    if(l==h) {
        TreeNode * n = new TreeNode(t[l]);
        return n;
    }
    int mid = (l+h)/2;
    TreeNode *root = new TreeNode(t[mid]);
    root->left = bst(l,mid-1,t);
    root->right = bst(mid+1,h,t);
    return root;
}
    TreeNode* balanceBST(TreeNode* root) {
        inorder(root);
        TreeNode* res = bst(0,t.size()-1,t);
        return res;
    }
};