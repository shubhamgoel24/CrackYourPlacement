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
int cal(TreeNode* root,int &c){
    if(!root)
        return 0;
    int a=cal(root->left,c);
    int b=cal(root->right,c);
    c=max(c,a+b);
    return 1+max(a,b);
}
class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int a=0,b=0;
        int c=0;
        a=cal(root->left,c);
        b=cal(root->right,c);
        return max(a+b,c);
    }
};