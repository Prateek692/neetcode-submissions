class Solution:

    def encode(self, strs: List[str]) -> str:
        res = ""
        for word in strs:
            res += str(len(word)) + '#' + word
        return res

    def decode(self, s: str) -> List[str]:
        length = ""
        res = []
        i = 0
        while i < len(s):
            if s[i] >= '0' and s[i] <= '9':
                length += s[i]
                i += 1
            elif s[i] == '#' and length != "":
                length_int = int(length)
                length = ""
                if length_int:
                    res.append(s[i+1:i+1+length_int])
                else:
                    res.append("")
                i += 1 + length_int
        return res
                



