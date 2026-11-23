class Solution:
    def isPalindrome(self, s: str) -> bool:
        s = ''.join([i for i in s if i.isalnum()]).lower()
       
        n = len(s)
        for i in range(0,n//2):
            if s[i] != s[n-1-i]:
                return False
        return True
        