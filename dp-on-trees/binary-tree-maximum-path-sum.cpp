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
 int ans=INT_MIN;
class Solution {
public:
      int mp(TreeNode* root, int & ans){
        if(!root)return 0;
       int lp=mp(root->left,ans);     // it will return the maximum path sum of left subtree of the root node
       int rp=mp(root->right,ans);    // it will return the maximum path sum of right  subtree of the root node
       int cur=max(max(root->val,lp+root->val),rp+root->val);    // we will only considere the maximum possible path sum , three option are there to take  , i) considering left subtree path +root     or  ii)  considering right subtree path +root   or iii) just root only  ( we will take the maximum one) 
        ans=max(max(cur,ans),lp+rp+root->val);  // taking maximum of alll possible path sum 
        return cur;
        
    }
    int maxPathSum(TreeNode* root) {
        int ans=INT_MIN;
        mp(root,ans);
        return ans;
    }
};