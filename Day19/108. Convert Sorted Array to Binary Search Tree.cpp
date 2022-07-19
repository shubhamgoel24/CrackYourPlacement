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
TreeNode* sol(vector<int>& n,int i,int j){
    TreeNode* x=new TreeNode();
    if(i==j){
        x->val=n[i];
        return x;
    }
    if(i>j)
        return NULL;
    int m=(i+j)/2;
    x->val=n[m];
    x->left=sol(n,i,m-1);
    x->right=sol(n,m+1,j);
    return x;
}

class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return sol(nums,0,nums.size()-1);
    }
};