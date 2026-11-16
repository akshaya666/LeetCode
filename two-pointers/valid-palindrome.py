class Solution:
    def isPalindrome(self, s: str) -> bool:
        i=0
        s = s.lower()
        s = ''.join(e for e in s if e.isalnum())
        if len(s)<1:
            return True
        return self.recurse(i,s)
    def recurse(self,i: int,s: str) -> bool:

        if(i>len(s)//2):
            return True
        if s[i] != s[len(s)-i-1]:
            return False
        return self.recurse(i+1,s)

        