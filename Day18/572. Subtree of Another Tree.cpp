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
bool ch(TreeNode* r, TreeNode* s){
    if(!r && !s)
        return true;
    if(!r || !s)
        return false;
    if(r->val != s->val)
        return false;
    return (ch(r->left,s->left) && ch(r->right,s->right));
}

class Solution {
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!subRoot)
            return true;
        else if(!root)
            return false;
        if(root->val == subRoot->val){
            bool x=ch(root,subRoot);
            if(x)
                return true;
        }
        return (isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot));
    }
};