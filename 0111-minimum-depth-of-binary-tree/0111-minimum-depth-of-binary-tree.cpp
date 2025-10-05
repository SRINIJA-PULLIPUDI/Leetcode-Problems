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
    int minDepth(TreeNode* root) {
        if(root==nullptr) return 0;
        int res=1;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int len = q.size();
            for(int i=0;i<len;i++){
                TreeNode* n = q.front();
                q.pop();
                if(n->left==nullptr and n->right==nullptr) return res;
                if(n->left) q.push(n->left);
                if(n->right) q.push(n->right);
            }
            res++;
        }
        return res;
    }
};