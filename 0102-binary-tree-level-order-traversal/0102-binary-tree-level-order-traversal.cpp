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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root==NULL) return{};
        vector<vector<int>>ans;
        queue<TreeNode*>Q;
        Q.push(root);
        while(!Q.empty()){
            vector<int>in;
            int h = Q.size();
            for(int i = 0; i < h; i++){
                TreeNode* curr = Q.front();
                Q.pop();
                in.push_back(curr->val);
                if(curr->left) Q.push(curr->left);
                if(curr->right) Q.push(curr->right);
            }
            ans.push_back(in);
        }
        return ans;
    }
};