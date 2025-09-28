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
int check(TreeNode* p, TreeNode* q){
    if(p==nullptr and q==nullptr) return 1;
    if(p==nullptr or q==nullptr) return 0;
    int left = check(p->left, q->left);
    int right = check(p->right, q->right);
    if(p->val==q->val) return (left and right);
    return 0;
}
    bool isSameTree(TreeNode* p, TreeNode* q) {
        int res = check(p,q);
        if(res==1) return true;
        return false;
    }
};