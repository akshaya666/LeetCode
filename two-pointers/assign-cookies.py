class Solution(object):
    def findContentChildren(self, g, s):
        """
        :type g: List[int]
        :type s: List[int]
        :rtype: int
        """
        g.sort()
        s.sort()

        satisfied = 0
        i =0

        while i < len(s) and satisfied <len(g):
            if s[i]>=g[satisfied]:
                satisfied+=1
            i+=1
        return satisfied
                
