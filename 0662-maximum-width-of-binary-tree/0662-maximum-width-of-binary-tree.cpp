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
#define ll unsigned long long
// void inorder(TreeNode* root,ll val,int c){
//     if(root==nullptr) return;
//     inorder(root->left,(val*2*1ll)-1,c+1);
//     // cout<<root->val<<" "<<val<<" "<<c<<endl;
//     if(mp.find(c)==mp.end()){
//         mp[c] = {val,val};
//     } 
//     else{
//         mp[c].second = min(mp[c].second,val);
//         mp[c].first = max(mp[c].first,val);
//     }
//     cout<<c<<" : "<<mp[c].first<<" "<<mp[c].second<<endl;
//     res = max(res,mp[c].first-mp[c].second+1);
//     inorder(root->right,(val*2),c+1);
//     // return;
// }
    int widthOfBinaryTree(TreeNode* root) {
        ll res=0;
        queue<pair<TreeNode*, ll>> q;
        q.push({root,0});
        while(!q.empty()){
            ll len = q.size();
            ll left = q.front().second;
            ll right = q.back().second;
            res = max(res,right-left+1);
            cout<<left<<" "<<right<<endl;
            for(ll i=0;i<len;i++){
                TreeNode* n = q.front().first;
                ll val = q.front().second;
                q.pop();
                if(n->left){
                    q.push({n->left,(val*2)-1});
                }
                if(n->right){
                    q.push({n->right,(val*2)});
                }
            }
        }
        return res;
    }
};