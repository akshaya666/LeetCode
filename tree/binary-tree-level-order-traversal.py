# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
from collections import deque
class Solution(object):
    def levelOrder(self, root):
        """
        :type root: Optional[TreeNode]
        :rtype: List[List[int]]
        """

        res = []

        if root is None:
            return []
        
        q = deque()
        q.append(root)

        while q:

            level = []

            lsize = len(q)

            for i in range(lsize):

                node = q.popleft()

                level.append(node.val)

                if node.left:
                    q.append(node.left)
                if node.right:
                    q.append(node.right)
            
            res.append(level)
        return res


        

        