# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def dfs(self,root,mp,x,y):

        if root is None:
            return
        mp[x].append([y,root.val])

        self.dfs(root.left,mp,x-1,y+1)
        self.dfs(root.right,mp,x+1,y+1)

    def verticalTraversal(self, root):
        """
        :type root: Optional[TreeNode]
        :rtype: List[List[int]]
        """
        mp = defaultdict(list)

        res = []

        self.dfs(root,mp,0,0)

        for col in sorted(mp.keys()):

            temp = sorted(mp[col],key = lambda x:[x[0],x[1]])

            res.append([t[1] for t in temp ])
        return res

        
