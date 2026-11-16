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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        stack<TreeNode*> s1,s2;
        s1.push(root);
        vector<int> temp;
        TreeNode* t;
        if(root==NULL)
            return {};
        while(!s1.empty() || !s2.empty())
        {
            
            temp.clear();
            if(!s1.empty())
            {
                while(!s1.empty())
                {
                    temp.push_back(s1.top()->val);
                    t=s1.top();
                    s1.pop();
                    if(t->left)
                        s2.push(t->left);
                    if(t->right)
                        s2.push(t->right);
                    
                }
            }
           else if(!s2.empty())
            {
                while(!s2.empty())
                {
                    temp.push_back(s2.top()->val);
                    t=s2.top();
                    s2.pop();
                     if(t->right)
                        s1.push(t->right);
                    if(t->left)
                        s1.push(t->left);
                   
                }
            }
            ans.push_back(temp);
            
        }
        return ans;
        
    }
};