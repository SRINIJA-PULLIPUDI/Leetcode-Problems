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
pair<int,int> avgSubtree(TreeNode* root){
    if(root==nullptr) return {0,0};
    pair<int,int> left = {avgSubtree(root->left)};
    pair<int,int> right = {avgSubtree(root->right)};
    int x = left.first+right.first+1;
    int y = (left.second + right.second + root->val)/x;
    // cout<<x<<" "<<y<<endl;
    if(root->val==y) res++;
    return {left.first+right.first+1,(left.second+right.second+root->val)}; 
}
    int averageOfSubtree(TreeNode* root) {
        pair<int,int> c = avgSubtree(root);
        // cout<<c.first<<" "<<c.second;
        return res;
    }
};
