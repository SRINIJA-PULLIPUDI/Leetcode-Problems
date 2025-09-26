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
int f=0;
int balanced(TreeNode* root){
    if(root==nullptr) return 0;
    int left = balanced(root->left);
    int right = balanced(root->right);
    if(abs(left-right)>1) f = 1;
    return max(left, right)+1;
}
    bool isBalanced(TreeNode* root) {
        int r = balanced(root);
        if(f==1) return false;
        return true;
    }
};