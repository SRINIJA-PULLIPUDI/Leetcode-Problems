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
int s=1;
    int balance(TreeNode* root){
        if(root==nullptr) return 0;
        int x = balance(root->left);
        int y = balance(root->right);
        if(abs(x-y)>1){
            s = 0;
        }return max(x,y)+1;
    }
    bool isBalanced(TreeNode* root) {
        int r = balance(root);
        if(s) return true;
        else return false;
    }
};