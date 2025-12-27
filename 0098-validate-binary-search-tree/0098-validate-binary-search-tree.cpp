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
void inorder(TreeNode *root){
    if(!root) return;
    inorder(root->left);
    a[f++]=root->val;
    inorder(root->right);
}
    bool isValidBST(TreeNode* root) {
        inorder(root);
        int b[10001];
        int c=0;
        if(f==1) return true;
        
        for(int i=0;i<f;i++){
            b[i]=a[i];
        }
        sort(b,b+f);
        for(int i=0;i<f-1;i++){
            if(b[i]==b[i+1]) c++;
        }
        if(c>=1) return false;
        for(int i=0;i<f;i++){
            if(a[i]!=b[i]) return false;
        }
        return true;
    }
};