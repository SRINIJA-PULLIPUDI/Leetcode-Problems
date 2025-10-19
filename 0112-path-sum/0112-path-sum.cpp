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
bool check(TreeNode* root, int k,int s){
    if(root==nullptr) return false;
    if(root->left==nullptr and root->right==nullptr){
        if((s+root->val)==k) return true;
        return false;
    }
    s+=root->val;
    return check(root->left,k,s) or check(root->right,k,s);

}
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root) return false;
        return check(root,targetSum,0);
    }
};