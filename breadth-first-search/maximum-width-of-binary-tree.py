# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def helper(self,root,mapper,level,column):

        if root is None:
            return
        
        mapper[level].append(column)

        self.helper(root.left,mapper,level+1,2*column)
        self.helper(root.right,mapper,level+1,2*column+1)


    def widthOfBinaryTree(self, root):
        """
        :type root: Optional[TreeNode]
        :rtype: int
        """
        mapper = defaultdict(list)

        self.helper(root,mapper,0,0)

        return max( [max(mapper[level])-min(mapper[level])+1  for level in mapper ]  )
        