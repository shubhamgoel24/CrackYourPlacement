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
bool ch(TreeNode* a,TreeNode* b){
    if(!a || !b)
        return !a && !b;
    if(a->val != b->val)
        return false;
    return ch(a->left,b->right) && ch(a->right,b->left);
}
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(!root)
            return true;
        return ch(root->left,root->right);
    }
};