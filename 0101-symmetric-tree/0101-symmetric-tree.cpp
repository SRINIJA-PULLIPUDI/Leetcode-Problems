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
    bool isSymmetric(TreeNode* root) {
        queue<TreeNode*> q;
        vector<vector<int>> res;
        q.push(root);
        while(!q.empty()){
            vector<int> a;
            int len = q.size();
            for(int i=0;i<len;i++){
                TreeNode* n = q.front();
                q.pop();
                if(n!=nullptr) a.push_back(n->val);
                else{
                    a.push_back(INT_MAX);
                    continue;
                }
                q.push(n->left);
                q.push(n->right);
            }
            res.push_back(a);
        }
        // for(int i=0;i<res.size();i++){
        //     for(int j=0;j<res[i].size();j++){
        //         cout<<res[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        for(int i=2;i<res.size();i++){
            vector<int> a;
            vector<int> b;
            int c=0;
            int n=res[i].size();
            for(int j=0;j<((n/2));j++){
                a.push_back(res[i][j]);
                // cout<<res[i][j]<<endl;
            }
            for(int j=((n/2));j<n;j++){
                b.push_back(res[i][j]);
                cout<<res[i][j]<<endl;
            }
            reverse(b.begin(), b.end());
            for(int j=0;j<a.size();j++){
                // cout<<a[j]<<" "<<b[j]<<endl;
                if(a[j]!=b[j]) return false;
            }
            if(res[1][0]!=res[1][1]) return false;
        }
        return true;
    }
};