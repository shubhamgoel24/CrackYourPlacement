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
string a="->";
void sol(TreeNode* root, string s,vector<string> &ans){
    if(!root)
        return;
    if(s.length()==0)
        s=to_string(root->val);
    else
        s+=(a+to_string(root->val));
    
    if(!root->left && !root->right){
        ans.push_back(s);
        return;
    }
    
    if(root->left)
        sol(root->left,s,ans);
    if(root->right)
        sol(root->right,s,ans);
    
}
class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        sol(root,"",ans);
        return ans;
    }
};