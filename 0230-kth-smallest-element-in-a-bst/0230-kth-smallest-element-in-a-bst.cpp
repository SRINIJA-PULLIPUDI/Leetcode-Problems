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
int min(int a,int b){
    if (a<b) return a;
    else return b;
}
int abs(int a,int b){
    if(a>b) return a-b;
    else return b-a;
}
int f=0;
int a[10001];
void inorder(TreeNode *root){
    if(!root) return;
    inorder(root->left);
    a[f++] = root->val; 
    inorder(root->right);
}
    int kthSmallest(TreeNode* root, int k) {
        inorder(root);
        return a[k-1];
    }
};