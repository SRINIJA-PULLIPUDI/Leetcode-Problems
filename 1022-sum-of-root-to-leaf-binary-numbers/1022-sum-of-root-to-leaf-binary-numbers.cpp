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
int inorder(TreeNode* root, int c){
    if(root==nullptr){
        return 0;
    }
    c = c*2 + root->val;
    if(root->left==nullptr and root->right==nullptr) return c;
    int left = inorder(root->left,c); 
    int right = inorder(root->right,c);
    return left+right;
}
    int sumRootToLeaf(TreeNode* root) {
        int res = inorder(root,0);
        return res;
    }
};