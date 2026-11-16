# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def helper(self,root1,root2):
        if root1 is None or root2 is None:
            return root1 == root2
        
        return root1.val == root2.val and self.helper(root1.left,root2.right) and self.helper(root1.right,root2.left)

    def isSymmetric(self, root):
        """
        :type root: Optional[TreeNode]
        :rtype: bool
        """
        if root is None:
            return True
        
        return self.helper(root.left,root.right)

        