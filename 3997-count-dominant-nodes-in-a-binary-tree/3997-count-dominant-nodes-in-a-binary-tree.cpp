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
int res=0;
int count(TreeNode* root){
    if(!root) return 0;
    int left = count(root->left);
    int right = count(root->right);
    if((root->val >= left) and (root->val >= right)) {
        res++;
    }
    return max({root->val, left, right});
}
    int countDominantNodes(TreeNode* root) {
        int k = count(root);
        return res;
    }
};