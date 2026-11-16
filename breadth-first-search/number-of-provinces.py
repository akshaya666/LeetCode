class Solution(object):
    def findCircleNum(self, isConnected):
        """
        :type isConnected: List[List[int]]
        :rtype: int
        """

        visited = set()

        def dfs(node):

            visited.add(node)

            for i in range(len(isConnected)):
                if isConnected[node][i] and i not in visited:
                    dfs(i)

        count = 0

        for i in range(len(isConnected)):
            if i not in visited:
                dfs(i)
                count+=1
        return count