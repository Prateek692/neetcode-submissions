class Solution:
    def reverseStringHelper(self,s,start,end):
        if start == end:
            return s[start]
        if start > end:
            return ""
        s[start],s[end] = s[end],s[start]
        return s[end] + self.reverseStringHelper(s,start+1,end-1) + s[start]

    def reverseString(self, s: List[str]) -> None:
        """
        Do not return anything, modify s in-place instead.
        """
        return self.reverseStringHelper(s,0,len(s)-1)
        
        