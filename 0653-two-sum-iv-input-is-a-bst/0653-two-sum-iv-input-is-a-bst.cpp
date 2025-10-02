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
int a[10001];
void inorder(TreeNode *root,int k){
    if(!root) return;
    inorder(root->left,k);
    a[f++] = root->val;
    inorder(root->right,k);
}
    bool findTarget(TreeNode* root, int k) {
        inorder(root,k);
        int i=0,j=f-1;
        while(i<j){
            if(a[i]+a[j]==k) return true;
            if(a[i]+a[j]<k) i++;
            else j--;
        }
        return false;
    }
};