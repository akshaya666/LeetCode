# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def helper(self,root,visited,k):
        if root is None:
            return False
        
        if k-root.val in visited:
            return True
        visited.add(root.val)

        return self.helper(root.left,visited,k) or self.helper(root.right,visited,k)
    def findTarget(self, root, k):
        """
        :type root: Optional[TreeNode]
        :type k: int
        :rtype: bool
        """
        visited = set()

        return self.helper(root,visited,k)


        