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
#define ll long long
ll c=0;
void Level(TreeNode* root){
    if(root==nullptr) return;
    Level(root->left);
    c+=1;
    Level(root->right);
}
    int countNodes(TreeNode* root) {
        Level(root);
        return c;
    }
};