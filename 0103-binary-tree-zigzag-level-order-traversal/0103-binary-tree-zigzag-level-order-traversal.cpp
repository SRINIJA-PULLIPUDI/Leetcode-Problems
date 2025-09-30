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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root==nullptr) return {};
        vector<vector<int>> res;
        queue<TreeNode*> q;
        q.push(root);
        int f=0;
        while(!q.empty()){
            int l = q.size();
            vector<int> a;
            for(int i=0;i<l;i++){
                TreeNode* n=q.front();
                q.pop();
                a.push_back(n->val);
                if(n->left) q.push(n->left);
                if(n->right) q.push(n->right);
            }
            if(f==1){
                reverse(a.begin(), a.end());
                res.push_back(a);
                f=0;
            }else{
                res.push_back(a);
                f=1;
            }
        }
        return res;
    }
};