# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
import math
class Solution(object):
    def helper(self,root,lower,upper):

        if root is None:
            return True
        
        if root.val <= lower or root.val>= upper:
            return False
        
        return self.helper(root.left,lower,root.val) and self.helper(root.right,root.val,upper)
    def isValidBST(self, root):
        """
        :type root: Optional[TreeNode]
        :rtype: bool
        """

        return self.helper(root,-float('inf'),float('inf'))
        