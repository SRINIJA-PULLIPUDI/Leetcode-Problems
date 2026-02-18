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
map<pair<int,int>,vector<int>> mp;
void inorder(TreeNode* root,int left,int right){
    if(root==nullptr) return;
    inorder(root->left,left+1,right-1);
    mp[{right,left}].push_back(root->val);
    inorder(root->right,left+1,right+1);
}
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> res;
        inorder(root,0,0);
        int f=0,prev;
        map<int,vector<int>> Mp;
        for(auto i:mp){
            int x = i.first.first;
            sort(i.second.begin(),i.second.end());
            Mp[x].insert(Mp[x].end(),i.second.begin(),i.second.end());
        }for(auto i:Mp){
            res.push_back(i.second);
        }
        return res;
    }
};